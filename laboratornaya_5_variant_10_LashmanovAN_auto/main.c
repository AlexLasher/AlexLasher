#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>

#define TElement unsigned char

void Randomize();
TElement Random(TElement);
TElement Filling(TElement,TElement);
void Print(TElement*,TElement**,TElement**);
int countWords(TElement*);

int main()
{
    TElement *string,**first,**second;
    Randomize();
    system("chcp 1251 > NUL");
    string=(TElement*)calloc(80,sizeof(TElement));
    gets(string);
    countWords(string);
    first=(TElement**)calloc(80,sizeof(TElement*));
    second=(TElement**)calloc(80,sizeof(TElement*));
    Print(string);
    return 0;
}
TElement Random(TElement diapazon){
    return (rand()%diapazon);
}
void Randomize(){
    srand(time(0));
}
TElement Filling(TElement diapazon, TElement minVal){
    TElement fill=Random(diapazon)+minVal;
    return fill;
}
void Print(TElement *massiv, TElement **first, TElement **second){
    int i,j=0;
    TElement *m;
    m=(TElement*)calloc(20,sizeof(TElement));
    for(i=0;*(massiv+i)!='\0';i++){
        printf("%c",*(massiv+i));
        if(*(massiv+i)!=' '){
            *(m+j)=*(massiv+i);
            j++;
        } else{
            *(m+j)='\0';
            j=0;

        }
    }
}
int countWords(TElement *string){
    int i,n;
    for(i=0;*(string+i)!='\0';i++){

    }
}

