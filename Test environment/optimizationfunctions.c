#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>






void cbuf(){
    fflush(stdin);
    fflush(stdout);
}

char* dataimputcharfunc() {
    char dataimputchar[100] = "";
    cbuf();
    gets(dataimputchar);
    cbuf();

    return dataimputchar;
}

struct ejer1
{
    char type[30];
    char brand[30];
    char devicemodel[50];
    int storagegb;
    int cpumodel;
    int ramcountgb;
    int screensize;
    int gpumodel;
};

int main(){

    char dataimputchar[100] = "";
    int dataimputint = 0;
    

    struct ejer1 a1;


    
    // strcpy(a1.type, );
    printf("%s",a1.type);
    
    return 0;
}