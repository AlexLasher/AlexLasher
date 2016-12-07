#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#define uchar unsigned char

void info(int);
void filling2(uchar m[][100]);
void filling(uchar *m);
void store(uchar m[][100],int,char Name[]);
void load(uchar m[][100],int,char Name[]);
void findWord2(uchar m[][100],uchar n1[][100],uchar n2[][100]);
void findWord(uchar*, uchar*,uchar n1[][100],uchar n2[][100], int, int);
void differ(uchar n1[][100],uchar n2[][100], uchar word[50],int);
void write(uchar m[][100], uchar word[], int);
void sort(uchar*,int);
uchar minimum(uchar*,int begin, int n);
void obmen(uchar*,int,int,int);
int find(uchar*,int,int,uchar);
void print2(uchar m[][100],int);
void SortInsert2(uchar m[][100],int);
void SortObmen2(uchar m[][100],int);
void toString(uchar m[][100], int);
void sort2(uchar m[][100],int);
int findEnd(uchar*);

int main()
{
    uchar m[5][100], n[5][100], n1[5][100], n2[5][100];
    int i;
    toString(n1,5);
    toString(n2,5);
    system("chcp 1251 > NUL");          info(1);
    filling2(m);
    store(m,5,"Massiv.dat");
    SortInsert2(m,5);                   info(11);
    print2(m,5);
    load(n,5,"Massiv.dat");             info(2);
    print2(n,5);
    findWord2(n,n1,n2);
    SortObmen2(n,5);                    info(12);
    print2(n,5);                        info(3);
    print2(n1,5);                       info(4);
    print2(n2,5);
    sort2(n1,5);
    sort2(n2,5);                        info(5);
    print2(n1,5);                       info(6);
    print2(n2,5);
    return 0;
}
void filling2(uchar m[][100]){
    int i;
    for(i=0;i<5;i++){
        filling(m[i]);
    }
}
void filling(uchar *m){
    int j;
    for(j=0;((m[j]=getchar())!='\n');j++);
    m[j]='\0';
}
void info(int i){
    switch(i){
        case 1: printf("\nЛабораторная работа №6 вариант №10\n\
Выполнил студент гр.ЦИСТбв-11 Лашманов А.Н. \n\
\nЗадание:В двумерный массив символов вводится текст \n\
на русском языке, состоящий из нескольких строк из слов.\n\
Записать данный массив в файл, затем из этого файла\n\
считать и поместить значения в другой двумерный массив\n\
Обработать данный массив, \n\
поместив в один массив слова, состоящие из русских букв\n\
из первой части кодовой страницы 866(от 'А' до 'п'),\n\
а во второй массив из другой части кодовой страницы((от 'р' до 'я'),\n\
Провести сортировку и распечатку исходного и полученных массивов.\n\n");
            break;
        case 2: printf("\n\nРаспечатываем массив, загруженный из файла\n\n");
            break;
        case 3: printf("\nВыбранные слова из первой части кодовой страницы\n\n");
            break;
        case 4: printf("\nВыбранные слова из второй части кодовой страницы\n\n");
            break;
        case 5: printf("\nОтсортированные символы слов методом прямого включения\n\из первой части кодовой страницы\n\n");
            break;
        case 6: printf("\nОтсортированные символы слов методом прямого включения\n\из второй части кодовой страницы\n\n");
            break;
        case 7: printf("\nЗаписываем в файл\n");
            break;
        case 8: printf("\nЧитаем из файла\n");
            break;
        case 9: printf("\nОшибка открытия файла для записи\n");
            break;
        case 10: printf("\nОшибка открытия файла для чтения\n");
            break;
        case 11: printf("\nСортируем первоначальный массив методом прямого обмена\n\n");
            break;
        case 12: printf("\nСортируем прочитанный из файла массив пузырьковым методом\n\n");
            break;
    }

}
void store(uchar m[][100],int N, char Name[]){
    int i;
    FILE *f;
    info(7);
    f=fopen(Name,"wb");
    if(f!=NULL){
        for(i=0;i<N;i++){
            fwrite(m[i],1,100*sizeof(uchar),f);
        }
        fclose(f);
    } else{
        info(9);
    }
}
void load(uchar m[][100],int N, char Name[]){
    int i;
    FILE *f;
    info(8);
    f=fopen(Name,"rb");
    if(f!=NULL){
        for(i=0;i<N;i++){
            fread(m[i],1,100*sizeof(uchar),f);
        }
        fclose(f);
    } else{
        info(10);
    }
}
void findWord2(uchar m[][100],uchar n1[][100],uchar n2[][100]){
    int i,letter=0;
    uchar word[50];
    for(i=0;i<5;i++){
        findWord(m[i],*word,n1,n2,letter,i);
/*        for(j=0;;j++){
            if(m[i][j]!='\0'&&m[i][j]!=' '){
                word[letter]=m[i][j];
                letter++;
            } else{
                word[letter]='\0';
                letter=0;
                differ(n1,n2,word,i);
            }
            if(m[i][j]=='\0'){
                break;
            }
        }*/
    }
}
void findWord(uchar *m, uchar *word, uchar n1[][100],uchar n2[][100], int letter,int i){
    int j;
    for(j=0;;j++){
        if(m[j]!='\0'&&m[j]!=' '){
            word[letter]=m[j];
            letter++;
        } else{
            word[letter]='\0';
            letter=0;
            differ(n1,n2,word,i);
        }
        if(m[j]=='\0'){
            break;
        }
    }
}
void differ(uchar n1[][100],uchar n2[][100], uchar word[50],int string){
    int i,first=0;
    for(i=0;word[i]!='\0';i++){
        if(word[i]<=(uchar)'п'){
            first++;
        }
    }
    word[i]='\0';
    if(i==first){
        write(n1,word,string);
    } else if(first==0){
        write(n2,word,string);
    }
}
void write(uchar m[][100], uchar word[50], int string){
    int i=findEnd(m[string]);
    for(;*word!='\0';m[string][i++]=*word++);
    m[string][i]='\0';
}
void sort(uchar *massiv,int n){
    int beg=0, indexMin;
    uchar min;
    for(beg=0;beg<n-1;beg++)
    {
        min=minimum(massiv,beg,n);
        indexMin=find(massiv,beg,n,min);
        obmen(massiv,n,beg,indexMin);
    }
}
uchar minimum(uchar *massiv,int begin, int n){
    int i;
    uchar min;
    min=massiv[begin];
    for(i=begin+1;i<n;i++){
        if(massiv[i]<min){
            min=massiv[i];
        }
    }
    return min;
}
void obmen(uchar *massiv,int n,int i1,int i2){
    uchar tmp;
    tmp=massiv[i1];
    massiv[i1]=massiv[i2];
    massiv[i2]=tmp;
}
int find(uchar *massiv,int begin,int n, uchar x){
    int i, k=-1;
    for(i=begin;i<n;i++){
        if (massiv[i]==x){
            k=i;
            break;
        }
    }
    return k;
}
void SortInsert (uchar m[], int n){
    int i;
    for (i=1; i<n; i++)
    Insert (m, i);
}
void Insert (uchar m[], int n){
    int i = n;
    while ((i>0)&&(m[i]<m[i-1])){
        obmen (m, n, i, i-1);
        i--;
    }
}
void Bubble (uchar m[], int n, int Up){
    int i;
    for (i = n-1; i>Up; i--)
        if (m[i]<m[i-1])
            obmen (m, n, i, i-1);
}
void SortObmen (uchar m [ ], int n){
    int i;
    for (i=0; i<n-1; i++)
        Bubble (m, n, i);
}
void print2(uchar m[][100], int n){
    int i;
    for(i=0;i<n;i++){
        puts(m[i]);
    }
}
void SortInsert2(uchar m[][100], int n){
    int i;
    for(i=0;i<n;i++){
        SortInsert(m[i],strlen(m[i]));
    }
}
void SortObmen2(uchar m[][100],int n){
    int i;
    for(i=0;i<n;i++){
        SortInsert(m[i],strlen(m[i]));
    }
}
void sort2(uchar m[][100],int n){
    int i;
    for(i=0;i<n;i++){
        sort(m[i],strlen(m[i]));
    }
}
void toString(uchar m[][100], int n){
    int i;
    for(i=0;i<5;i++){
        m[i][0]='\0';
    }
}
/*
ыф аф ЖЛУАм жТМ аОТЫКШо МЖМЖОЛТ
ШУО ММА Мтвамотвд МЛДТКМ ятыц
ухь ТМДЬТАМ ЛТВИГШЩТ ЬМОлти чдлати
ЭШКОРм тсЛДРК чцщю идлчдача
чок ЧДАЛТМЧСЖМ ЧДЛ эцхс мл
*/
int findEnd(uchar *m){
    int i;
    for(i=0;m[i]!='\0';i++);
    return i;
}
