#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
int datainputint = 0;
int opcre = 0;

typedef struct 
{
    char type[30];
    char brand[30];
    char devicemodel[50];
    char storagegb[50];
    char cpumodel[50];
    char ramcountgb[50];
    char screensize[50];
    char gpumodel[50];
    float price;
} info, infouni;

infouni a2a;
infouni a2b2;
infouni a2c2;
infouni a2d2;
infouni a2e2;
infouni a2f2;

void cbuf(){
    fflush(stdin);
    fflush(stdout);
}

int arrayfunc(){
    int opcarray = 0;
    // char arreglo[11] = "";
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

info struca1()
{
    info a1;
    char dataimputchar[100] = "";  
    printf("En caso de no conocer el parametro coloque 0 \n"); 
    cbuf();

    printf("Ingrese la marca\n");
    gets(dataimputchar);
    strcpy(a1.brand, dataimputchar);
    cbuf();

    printf("Ingrese el modelo del dispositivo \n");
    gets(dataimputchar);
    strcpy(a1.devicemodel, dataimputchar);
    cbuf(); 


    printf("Ingrese el precio en dolares (obligatorio)\n");
    scanf("%f",&a1.price);
    cbuf();

    printf("Ingrese cantidad de almacenamiento\n");
    gets(dataimputchar);
    strcpy(a1.storagegb ,dataimputchar);
    cbuf();

    printf("Ingrese modelo del cpu\n");
    gets(dataimputchar);
    strcpy(a1.cpumodel ,dataimputchar);
    cbuf();

     printf("Ingrese cantidad de ram\n");
    gets(dataimputchar);
    strcpy(a1.ramcountgb ,dataimputchar);
    cbuf();

     printf("Ingrese tamaño de la pantalla\n");
    gets(dataimputchar);
    strcpy(a1.screensize ,dataimputchar);
    cbuf();

     printf("Ingrese el modelo de la gpu\n");
    gets(dataimputchar);
    strcpy(a1.gpumodel ,dataimputchar);
    cbuf();
      
    return a1;
};

info print(info b){
    char ifcond = '0';
    if ((*b.brand) != ifcond) {
      printf("Marca: %s \n",b.brand);
    }
    if ((*b.devicemodel) != ifcond) {
        printf("Modelo: %s \n",b.devicemodel);
    }
    printf("Precio (dolares): %.2f$ \n",b.price);
    if (*b.storagegb != ifcond) {
        printf("Almacenamiento: %s \n",b.storagegb);
    }
     if (*b.ramcountgb != ifcond) {
        printf("Cantidad de ram: %s \n",b.ramcountgb);
    }
    if (*b.cpumodel != ifcond) {
        printf("Modelo del cpu: %s \n",b.cpumodel);
    }
    if (*b.screensize != ifcond) {
        printf("Tamano de pantalla: %s \n",b.screensize);
    }
    if (*b.gpumodel != ifcond) {
        printf("Modelo de la gpu: %s \n \n",b.gpumodel);
    }
    cbuf();
   return b;
}

info fprint(info b){
   printf(".");
   FILE *pf;
   pf = fopen("reciept.txt","w");
   fprintf(pf,"Marca: %s \n",b.brand);
   fprintf(pf,"Modelo: %s \n",b.devicemodel);
   return b;
}

int one(){
    printf("\n");
        info b;
        b = struca1();
        a2b2 = b;
        system("pause");

        printf(" \n Desea ver las especificacione de sus dispositivos? \n");
        scanf("%d",&datainputint);
        cbuf();
        if (datainputint == 0) {
            printf("\n Especificaciones del producto 1: \n");
            print(b);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
        //printf("Desea imprimir recibo? (0 si, 1 no) \n");
        //scanf("%d",&datainputint);
        //cbuf();
        //if (datainputint == 0) {
        // FILE *pf;
        // pf = fopen("receipt.txt","w");     
        // fprint(b);
        // fclose(pf);  
        // printf("Su recibo a sido impreso, revise la carpeta con el ejecutable para verlo (0 si, 1 no) \n" );
        // scanf("%d",&datainputint);
        // cbuf();
        // if (datainputint == 0) { 
        //    pf = fopen("receipt.txt","r");
        //    if (pf == NULL) {printf("recivo inexistente");}
        //                       } else {
        //    printf("Usted ha llegado al fin del programa, desea salir(0) o reiniciar(1)?");

        //                              }
        // } else {printf("Usted ha elejido no imprimir resivo, Pase un buen dia."); 
        //}
  return 0;
}

int two(){
    printf("\n");
        info c;
        c = struca1();
        a2c2 = c;
        system("pause");

        printf(" \n Desea ver las especificacione del dispositivo ingresado? \n");
        scanf("%d",&datainputint);
        cbuf();
        if (datainputint == 0) {
            printf("\n Especificaciones del producto 2: \n");
            print(c);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
  return 0;
}

int three(){
    printf("\n");
        info d;
        d = struca1();
        a2d2 = d;
        system("pause");

        printf(" \n Desea ver las especificacione del dispositivo ingresado? \n");
        scanf("%d",&datainputint);
        cbuf();
        if (datainputint == 0) {
            printf("\n Especificaciones del producto 3: \n");
            print(d);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
  return 0;
}

int four(){
    printf("\n");
        info e;
        e = struca1();
        a2e2 = e;
        system("pause");

        printf(" \n Desea ver las especificacione del dispositivo ingresado? \n");
        scanf("%d",&datainputint);
        cbuf();
        if (datainputint == 0) {
            printf("\n Especificaciones del producto 4: \n");
            print(e);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
  return 0;
}

int five(){
    printf("\n");
        info f;
        f = struca1();
        a2c2 = f;
        system("pause");

        printf(" \n Desea ver las especificacione del dispositivo ingresado? \n");
        scanf("%d",&datainputint);
        cbuf();
        if (datainputint == 0) {
            printf("\n Especificaciones del producto 5: \n");
            print(f);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
  return 0;
}

int strucsend() {
    printf("Usted ha llegado al fin del programa, desea volver a inicio(0), volver al menu de estructuras?(1), reinciar este ejercicio(2) o salir (3)? ");
        scanf("%d",&datainputint); cbuf(); switch (datainputint)
        {
        case 0:
            system("pause");
            system("cls");
            main();
            break;
        case 1:
            system("pause");
            system("cls");
            strucfunc();
            break;
        case 2:
            system("pause");
            system("cls");
            structeje1();
            break;
        case 3:
           printf("Bye");
            break;
                     
        default:
            break;
        }
    return 0;
}

int structeje1() {
   printf("\n");
            system("cls");
            printf("Cuantos productos desea almacenar? (maximo 5)\n"); 
    scanf("%d",&datainputint);
    cbuf();
    printf("\n En caso de no conocer el parametro coloque 0 \n");
    cbuf();
    switch (datainputint)
    {
    case 1:
        printf("\n Producto 1: \n");
        one();
        printf("\n Desea imprimir los productos ingresados? (0 = si) \n");
        scanf("%d",&datainputint);
        cbuf();
        if (datainputint == 0) {
           print(a2b2);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
        strucsend(); 
        break;  
    case 2:
        printf("\n Producto 1: \n");
        one();
        printf("\n Producto 2: \n");
        two();
        printf("\n Desea imprimir los productos ingresados? (0 = si) \n");
        scanf("%d",&datainputint);
        cbuf();
        if (datainputint == 0) {
           print(a2b2);
           print(a2c2);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
        strucsend();       
        break;
    case 3:
        printf("\n Producto 1: \n");
        one();
        printf("\n Producto 2: \n");
        two(); 
        printf("\n Producto 3: \n");
        three();
        printf("\n Desea imprimir los productos ingresados? (0 = si)\n");
        scanf("%d",&datainputint);
        cbuf();
        if (datainputint == 0) {
           print(a2b2);
           print(a2c2);
           print(a2d2);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
        strucsend();  
        break;
    case 4:
        printf("\n Producto 1: \n");
        one();
        printf("\n Producto 2: \n");
        two(); 
        printf("\n Producto 3: \n");
        three();
        printf("\n Producto 4: \n");
        four();
        printf("\n Desea imprimir los productos ingresados? (0 = si) \n");
        scanf("%d",&datainputint);
        cbuf();
        if (datainputint == 0) {
           print(a2b2);
           print(a2c2);
           print(a2d2);
           print(a2e2);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
        strucsend();  
        break;
    case 5:
        printf("\n Producto 1: \n");
        one();
        printf("\n Producto 2: \n");
        two(); 
        printf("\n Producto 3: \n");
        three();
        printf("\n Producto 4: \n");
        four();        
        printf("\n Producto 5: \n");
        five();
        printf("\n Desea imprimir los productos ingresados? (0 = si) \n");
        scanf("%d",&datainputint);
        cbuf();
        if (datainputint == 0) {
           print(a2b2);
           print(a2c2);
           print(a2d2);
           print(a2e2);
           print(a2f2);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}  
        strucsend();
        break; 
  
        default:
          printf("Usted ha ingresado un valor invalido, presione: \n 0 para reiniciar ejercisio \n 1 para volver al menu de estructuras \n 2 para volver al menu princial\n");
           scanf("%d",&datainputint);
           cbuf();
           switch (datainputint)
            {
              case 0:
              system("cls");
              system("pause");
              structeje1();   
              break;
              case 1:
              system("cls");
              system("pause");
              strucfunc();
              break; 
              case 2: 
              system("cls");
              system("pause");
              main();
             default:
             printf("\nUsted, otra vez, ha ingresado un valor invalido por lo que sera llevado al menu principal\n");
             system("pause");
             system("cls");
             main();
              break;
            }

    }
    return 0;
}

int strucfunc(){
    int opcstruct = 0;
    printf("Ingrese el numero del ejercicio que quiere ver y 4 para volver al menu \n");
    scanf("%d", &opcstruct);
    cbuf();
    switch (opcstruct)
    {
    case 1:
    structeje1();  
        break;  
    case 2:
    structeje2();
        break;
    case 3:
    structeje3();
        break;
    default:
    printf("Usted ha ingresado un valor invalido sus opciones son las siguientes, presione: \n 0 para volver al menu principal\n 1 para reinciar este menu\n 2 para salir");
    scanf(datainputint);
    cbuf();
    switch (datainputint)
    {
    case 0:
        system("pause");
        system("cls");
        main();
        break;

    case 1:
        system("pause");
        system("cls");
        strucfunc();
        break;

    case 2:
        printf("Bye"); 
        break;
    
    default:
        printf("Usted ha ingresado, otra vez, un valor invalido, sera redirigido al menu principal");
        system("pause");
        system("cls");
        main();
        break;
    }
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