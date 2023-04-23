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
        
        break;
    
    case 2:
        printf("zzz \n"); 
        float arreglo2[6] = {0,95.75,0,87.91,0,85.72};
        

        break;
    
    case 3:
        printf("\n"); 
        char arreglo3 [5][10];
        printf("Ingrese 5 palabras (deben tener menos o 10 letras) \n");
        scanf("%s",arreglo3[0][10]);
        scanf("%s",arreglo3[1][10]);
        scanf("%s",arreglo3[2][10]);
        scanf("%s",arreglo3[3][10]);
        scanf("%s",arreglo3[4][10]);
       
        printf("\n%s \n",arreglo3[0]);
        printf("%s \n",arreglo3[1]);
        printf("%s \n",arreglo3[2]);
        printf("%s \n",arreglo3[3]);
        printf("%s \n",arreglo3[4]);
        break;

    case 4:
        system("cls");
        main();
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


int main() {
int opc = 0;
printf("Guia 1 \n Presione 0 para entrar a los arreglos \n Presione 1 para las Estructuras (no funcional) \n Presione 2 para salir \n");
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