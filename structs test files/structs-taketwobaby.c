#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>

void cbuf(){
    fflush(stdin);
    fflush(stdout);
}

typedef struct 
{
    char type[30];
    char brand[30];
    char devicemodel[50];
    char storagegb;
    char cpumodel;
    char ramcountgb;
    char screensize;
    char gpumodel;
    int price;
} info;

struct info {
    char type[30];
    char brand[30];
    char devicemodel[50];
    char storagegb;
    char cpumodel;
    char ramcountgb;
    char screensize;
    char gpumodel;
    int price;
};

struct info struca1()
{
    struct info a1;
    
    char dataimputchar[100] = "";  
    printf("En caso de no conocer el parametro coloque 0 \n"); 
    cbuf();

    printf("Ingrese la marca\n");
    gets(dataimputchar);
    strcpy(a1.brand, dataimputchar);

    printf("Ingrese el modelo del dispositivo \n");
    gets(dataimputchar);
    strcpy(a1.devicemodel, dataimputchar);
    cbuf(); 


    printf("%s",a1.brand);
    return a1;
};



int main(){ 
    int datainputint = 0;
    char p[100] = ""; 
    
    

    printf("Cuantos productos desea almacenar?\n");
    scanf("%d",&datainputint);
    switch (datainputint)
    {
    case 1:
        struct info b;
        b = struca1();
        
        system("pause");
        system("cls");
        printf("The specifications of your devide are:  \n");
        

                   
        break;  
    default:
        break;
    }

    

    return 0;
}