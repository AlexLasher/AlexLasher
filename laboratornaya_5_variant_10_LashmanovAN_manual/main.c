#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

#define TElement unsigned char

void Randomize();
TElement Random(TElement);
TElement Filling(TElement,TElement);

int main()
{
    int i,j,size,*m,*f,*s,fir,sec,firCount=0,secCount=0;
    TElement ** text,**first,**second;
    Randomize();
    system("chcp 1251 > NUL");
    printf("%d", (TElement)'ï');
    size=Random(20)+5;
    text=(TElement**)calloc(size,sizeof(TElement*));
    m=(int *)malloc(sizeof(int)*size);
    for(i=0;i<size;i++){
        m[i]=Random(10)+1;
        text[i]=(TElement*)calloc(m[i],sizeof(TElement));
        for(j=0;j<m[i];j++){
            text[i][j]=Filling(63,192);
        }
    }
    printf("\nresult:\n");
    for(i=0;i<size;i++){
        fir=0,sec=0;
        for(j=0;j<m[i];j++){
            printf("%c", text[i][j]);
            if(text[i][j]<=239){
                fir++;
            } else{
                sec++;
            }
        }
        if(fir==m[i]){
            firCount++;
        } else if(sec==m[i]){
            secCount++;
        }
        printf("%c",' ');
    }
    first=(TElement**)calloc(firCount,sizeof(TElement*));
    f=(int*)calloc(firCount,sizeof(int));
    second=(TElement**)calloc(secCount,sizeof(TElement*));
    s=(int*)calloc(secCount,sizeof(int*));
    firCount=0,secCount=0;
    for(i=0;i<size;i++){
        for(j=0;j<m[i];j++){
            if(text[i][j]<=239){
                fir++;
            } else{
                sec++;
            }
        }
        if(fir==m[i]){
            first[firCount]=(TElement*)calloc(m[i],sizeof(TElement));
            for(j=0;j<m[i];j++){
                first[firCount][j]=text[i][j];
                f[firCount]=m[i];
            }
            firCount++;
        } else if(sec==m[i]){
            second[secCount]=(TElement*)calloc(m[i],sizeof(TElement));
            for(j=0;j<m[i];j++){
                second[secCount][j]=text[i][j];
                s[secCount]=m[i];
            }
            secCount++;
        }
    }
    printf("\nFirst bucket:\n");
    for(i=0;i<firCount;i++){
        for(j=0;j<f[i];j++){
            printf("%c",first[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond bucket:\n");
    for(i=0;i<secCount;i++){
        for(j=0;j<s[i];j++){
            printf("%c",second[i][j]);
        }
        printf("\n");
    }
    return 0;
}

TElement Random(TElement diapazon){
    return (rand()%diapazon);
}
TElement Filling(TElement diapazon, TElement minVal){
    TElement fill=Random(diapazon)+minVal;
    return fill;
}
void Randomize(){
    srand(time(0));
}
