#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define massiv ",./<>?;':\'\"\\+=-_ []{}!@#%^&*()"

typedef struct TStr *PStr;
typedef struct TStr{
	char *word;
	PStr p;
	}TStr;
PStr createList(int);
void fillList(PStr,char*,char*);
void readList(PStr);
void invertWords(PStr);
char* load(char Name[]);
void saveList(PStr,char*);
void info(int);

int main(void) {
	PStr P;
	char *input,razd[]=massiv;
	system("chcp 1251 > NUL");
	P=createList(15);
	info(1);
	info(2);
	input=load("Input.dat");
	puts(input);
	info(3);
	fillList(P,razd,input);
	readList(P);
	info(4);
	invertWords(P);
	readList(P);
	info(5);
	saveList(P,"Result.dat");
	return 0;
}

char* load(char Name[]){
    FILE *f;long f_size;char *m;
    f=fopen(Name,"r");
    if(f==NULL){
        printf("������ ��� ������ �����");
    } else{
        fseek(f,0,SEEK_END);
        f_size=ftell(f);
        rewind(f);
        m=(char*)malloc(f_size+1);
        fread(m,1,f_size,f);
        fclose(f);
        m[f_size]='\0';
    }
    return m;
}

void saveList(PStr P,char Name[]){
    FILE *f;
    f=fopen(Name,"w");
    if(f!=NULL){
        while(P->p!=NULL){
            fwrite(P->word,1,(strlen(P->word))*sizeof(char),f);
            fwrite(" ",1,sizeof(char),f);
            P=P->p;
        }
        fclose(f);
    } else{
        printf("������ ��� ������ �����");
    }
}

PStr createList(int n){
	PStr first,tmp=first=(PStr)malloc(sizeof(struct TStr));
	for(;n!=1;n--){
		tmp->p=(PStr)malloc(sizeof(struct TStr));
		tmp=tmp->p;
	}
	tmp->p=NULL;
	return first;
}
void fillList(PStr P,char *razd,char *input){
    P->word=strtok(input,razd);
	while(P->word!=NULL){
		P=P->p;
		P->word=strtok(NULL,razd);
	}
	P->p=NULL;
}
void readList(PStr P){
    while(P->p!=NULL){
		printf("%s ",P->word);
		P=P->p;
	}
}
void invertWords(PStr P){
    while(P->p!=NULL){
        P->word=strrev(P->word);
		P=P->p;
	}
}
void info(int messageNum){
    switch(messageNum){
    case 1:printf("\n������������ ������ �8 ������� �10\n\
�������� ������� ��.������-11 �������� �.�. \n\
\n�������:����������� �� ����� ����������� �� ���������� ����, �����\n\
�������� ������������� ������������� �������������� ����� � ����� ����������.\n\
�������� �� ����������� ��������� ����� ��������� ������ ����.\n\
��� ����� ������� ����� � ����������� �������� � ��������\n\
������� � ����������� ������������ �����������\n\
����������� ��������� ��������� �� ����� ��������.\n\
������������ ��� ����� ������ ������������ ������� ���\n\
������ �� ��������.����� ��������� ����������� �� ����� 80 ��������.\n\\n");
        break;
    case 2:printf("\n\n��������� ����� �� �����: \n");
        break;
    case 3:printf("\n\n��������� ������ ������� �� ������:\n");
        break;
    case 4:printf("\n\n����������� ����� � ������:\n\n");
        break;
    case 5:printf("\n\n��������� ��������������� ����� � ����.\n\n");
        break;
    }

}
