#include<stdio.h>
#include<dos.h>
#include<stdlib.h>

int opcre = 0;

void cbuf(){
    fflush(stdin);
    fflush(stdout);
}


int arrayfunc(){
    int opcarray = 0;
    char arreglo[11] = "";
    printf("Ingrese el numero del ejercicio que quiere ver y 4 para volver al menu \n");
    scanf("%d", &opcarray);
    switch (opcarray) {
    case 1:
        printf("zzz \n"); 
        char arreglo1[11] = {'0','1','5','7','-','M','P','2','0','2','3'};
        for (int i =0; i <= 5; i++) {
            printf(" %c ", arreglo1[i]);
         }
        break;
    
    case 2:
        printf("zzz \n"); 
        float arreglo2[6] = {0,95.75,0,87.91,0,85.72};
        for (int i =0; i <= 5; i++) {
            printf(" %.2f ", arreglo2[i]);
         }
        break;
    
    case 3:
        printf("\n"); 
        char arreglo3 [5][10] ={{'L','a','p','i','z'},
                        {'B','o','r','r','a','d','o','r'} ,
                        {'R','e','g','l','a'},
                        {'T','a','j','a','d','o','r'},
                        {'M','o','c','h','i','l','a'}};
for (int i = 0; i <= 4; i++) {
    for (int e=0; e<=9; e++) {
            printf("%c",arreglo3[i][e]);
            if (e==9) { printf("\n");}}}
       
        break;
     
    default:
    printf("Usted Ingreso un valor invalido \n");
  printf("Desea \n 1. Volver al menu principal \n 2. Volver al menu de ejercicios de arrays \n 3. Salir \n");
  scanf("%d", &opcre);
         switch (opcre)
         {
             case 1:
               system("cls");
               main();
                 break;

            case 2:
               system("cls");
               arrayfunc();
                 break;

            case 3:
                 break; 
  
            default:
            printf(":I \n");
            system("pause");
            system("cls");
            arrayfunc();
                 break;
  }
     break;
    
  }
        
    

    return 0;
}

int strucfunc(){
    int opcstruct = 0;
    printf("Ingrese el numero del ejercicio que quiere ver y 4 para volver al menu \n");
    scanf("%d", &opcstruct);
    switch (opcstruct)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }

    return 0;
}


int main() {
int opc = 0;
printf("Guia 1 \n Presione 0 para entrar a los arreglos \n Presione 1 para las Estructuras \n Presione 2 para salir \n");
cbuf(); 
scanf("%d",&opc);
cbuf();

switch (opc)
{
case 0:
    printf("Los arreglos seran mostrados a continuacion \n"); 
    cbuf();
    system("pause");
    system("cls");
    arrayfunc();
    break;
case 1:
    printf("Las estructuras seran mostradas a continuacion \n"); 
    cbuf();
    system("pause");
    system("cls");
    strucfunc();
    break;

case 2:
    printf("Pase un buen dia \n"); 
    cbuf();
    break;

default:
  printf("Usted Ingreso un valor invalido \n");
  printf("Desea cerrar o reinciar el programa?\n (presione 2 para reiniciar, cualquier otra tecla para cerrar) \n");
  scanf("%d", &opcre);
  if (opcre == 2) {
    system("cls");
    cbuf();
    main();
  } else {}

    break;
}


    return 0;
}