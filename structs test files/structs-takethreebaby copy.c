#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
int datainputint = 0;
void cbuf(){
    fflush(stdin);
    fflush(stdout);
}

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


info struca1()
{
    info a1;
    char dataimputchar[100] = "";  
    
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
   printf("\n");
          printf("Marca: %s \n",b.brand);
    
        printf("Modelo: %s \n",b.devicemodel);
    
    printf("Precio (dolares): %.2f$ \n",b.price);
   
        printf("Almacenamiento: %s \n",b.storagegb);
    

        printf("Modelo del cpu: %s \n",b.cpumodel);
    
    
        printf("Tamano de pantalla: %s \n",b.screensize);

        printf("Modelo de la gpu: %s \n",b.gpumodel);
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
        if (datainputint == 0) {
            printf("\n Especificaciones del producto 1: \n");
            print(b);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
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
        if (datainputint == 0) {
            printf("\n Especificaciones del producto 5: \n");
            print(f);
        } else {printf("\n Usted ha elegido no imprimir el producto\n");}
  return 0;
}

int strucsend() {
    printf("Usted ha llegado al fin del programa, desea volver a inicio(0), volver al menu de estructuras?(1), reinciar este ejercicio(2) o salir (3)? ");
        scanf("%d",&datainputint); switch (datainputint)
        {
        case 0:
            /* code */
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
                     
        default:
            break;
        }
    return 0;
}

int main(){ 
    printf("Cuantos productos desea almacenar? (maximo 5)\n"); 
    scanf("%d",&datainputint);
    printf("\n En caso de no conocer el parametro coloque 0 \n");
    cbuf();
    switch (datainputint)
    {
    case 1:
        printf("\n Producto 1: \n");
        one();
        printf("\n Desea imprimir los productos ingresados? \n");
        scanf("%d",&datainputint);
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
        printf("\n Desea imprimir los productos ingresados? \n");
        scanf("%d",&datainputint);
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
        printf("\n Desea imprimir los productos ingresados? \n");
        scanf("%d",&datainputint);
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
        printf("\n Desea imprimir los productos ingresados? \n");
        scanf("%d",&datainputint);
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
        printf("\n Desea imprimir los productos ingresados? \n");
        scanf("%d",&datainputint);
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
    printf("Usted ha ingresado un valor invalido, presione 0 para reiniciar ejercisio, 1 para volver al menu de estructuras y 2 para volver al menu princial");
    scanf("%d",&datainputint);
    switch (datainputint)
    {
    case 0:
        break;
    
    default:
        break;
    }
        break;
    }

    

    return 0;
}