#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define uchar unsigned char

void info();
int differ(uchar*, int);
int stringl(uchar*);
void concut(uchar*,uchar*);
void prints(uchar*);
void sort(uchar*,int);
uchar minimum(uchar*,int,int);
void obmen(uchar*,int,int,int);
int find(uchar*,int,int,uchar);

int main()
{
    uchar string[100],word[50], second[100],first[100];first[0]='\0',second[0]='\0';
    int i,j=0,choice;
    system("chcp 1251 > NUL");
    info();
    printf("\n������� �����������, ��������� �� ������� ����(�������� � ���������)\n");
    gets(string);
    for(i=0;i<stringl(string);i++){
        if(string[i]!=' '&&string[i]!='\0'){
            word[j]=string[i];
            j++;
        } else{
            word[j]='\0';
			choice=differ(word,stringl(word));
			if(choice==1){
				concut(word,first);
			} else if(choice==2){
				concut(word,second);
			}
            j=0;
		}
    }
    printf("\n����� �� ������ ����� ������� ��������\n");
    puts(first);
    printf("\n����� �� ������ ����� ������� ��������\n");
    puts(second);
    sort(first,stringl(first));
    sort(second,stringl(second));
    printf("\n��������������� ������� ���� �� ������ ����� ������� ��������\n");
    puts(first);
    printf("\n��������������� ������� ���� �� ������ ����� ������� ��������\n");
    puts(second);
    system("pause>NUL");
    return 0;
}
// ������ ���� ���� ����� ���
int differ(uchar *word, int i){
	int second=0,first=0;
	for(;*word!='\0';){
		if(*word<(uchar)'�'){
			first++;
		} else{
			second++;
		}
		*word++;
	}
	if(first==i){
        return 1;
    } else if(second==i){
        return 2;
    } else{
        return 3;
    }
}
int stringl(uchar *string){
	uchar n=0;
	for(n=0;*string!='\0';n++,string++);
	return (int)n;
}
void concut(uchar *massiv,uchar *bucket){
	int l,s=stringl(massiv),r=stringl(bucket);
	for(l=0;l<s;l++){
		bucket[l+r]=massiv[l];
	}
	    bucket[r+l]='\0';
}
void prints(uchar *string){
    for(;*string!='\0';){
        printf("%c",*string++);
    }
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
void info(){
    printf("\n������������ ������ �5 ������� �10\n\
�������� ������� ��.������-11 �������� �.�. \n\
\n�������:� ������ �������� �������� ����� �� ������� �����, ��������� �� ���������� ����.\n\
��������� � ���� ������ �����, ��������� �� ������� ����\n\
�� ������ ����� ������� �������� 866(�� '�' �� '�'),\n\
� �� ������ ������ �� ������ ����� ������� ��������((�� '�' �� '�'),\n\
�������� ���������� � ���������� ��������� � ���������� ��������.\n");
}
