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
        printf("ошибка при чтении файла");
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
        printf("ошибка при записи файла");
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
    case 1:printf("\nЛабораторная работа №8 вариант №10\n\
Выполнил студент гр.ЦИСТбв-11 Лашманов А.Н. \n\
\nЗадание:Считывается из файла предложение из нескольких слов, между\n\
которыми располагаются разнообразные разделительные знаки и знаки препинания.\n\
Выделить из предложения отдельные слова связанный список слов.\n\
Все буквы каждого слова в предложении записать в обратном\n\
порядке и распечатать получившееся предложение\n\
Распечатать результат обработки на экран монитора.\n\
Использовать как можно больше библиотечных функций для\n\
работы со строками.Длина вводимого предложения не более 80 символов.\n\\n");
        break;
    case 2:printf("\n\nЗагружаем текст из файла: \n");
        break;
    case 3:printf("\n\nЗаполняем список словами из текста:\n");
        break;
    case 4:printf("\n\nИнвертируем слова в тексте:\n\n");
        break;
    case 5:printf("\n\nСохраняем преобразованный текст в файл.\n\n");
        break;
    }

}
