#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>

void cbuf(){
    fflush(stdin);
    fflush(stdout);
}

struct info
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
};




int main(){

    char dataimputchar[100] = "";  
    int datainputint = 0;
    int getprice = 0;
    char type = "";



    Printf("Cuantos productos desea almacenar?");
    scanf("%d",&datainputint);
    switch (datainputint)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    case 5:
        /* code */
        break;
    
    default:
        break;
    }

    cbuf();
    printf("Seleccione el tipo de dispositivo 1. Laptop \n 2.Celular \n 3. Tablet \n 4.Smarttv \n");
    scanf("%d",&datainputint);

    switch (datainputint) {
          case 1:

          break;

          case 2:

          break;

          case 3:

          break;

          case 4:

          break;

          default:

          break;
    }
    
    cbuf(); 

 
    






    



 



    return 0;
}

struct info struca1()
{
    struct info a1;
    
    char dataimputchar[100] = "";  
    int datainputint = 0;
    printf("En caso de no conocer el parametro coloque 0 \n"); 
    cbuf();

    printf("Ingrese la marca\n");
    gets(dataimputchar);
    strcpy(a1.brand, dataimputchar);

    printf("Ingrese el modelo del dispositivo \n");
    gets(dataimputchar);
    strcpy(a1.devicemodel, dataimputchar);
    cbuf(); 

    printf("Ingrese el almacenamiento del que dispone el dispositivo \n");
    gets(dataimputchar);
    strcpy(&a1.storagegb, dataimputchar);
    cbuf(); 

    printf("Ingrese el modelo del cpu (ej: i5 11400f, Apple M1) \n");
    gets(dataimputchar);
    strcpy(&a1.cpumodel, dataimputchar);
    cbuf(); 

    printf("Ingrese la cantidad de ram, coloque solo el numero \n");
    gets(dataimputchar);
    strcpy(&a1.ramcountgb, dataimputchar);
    cbuf(); 
    printf("Ingrese el tamaño de la pantalla \n");
    gets(dataimputchar);
    strcpy(&a1.screensize, dataimputchar);
    cbuf(); 
    printf("Ingrese modelo de la GPU \n");
    gets(dataimputchar);
    strcpy(&a1.gpumodel, dataimputchar);
    cbuf(); 

    printf("Ingrese precio en dolares");
    scanf("%d",&a1.price);
    cbuf();

    printf("%s",a1.brand);
    return a1;
};