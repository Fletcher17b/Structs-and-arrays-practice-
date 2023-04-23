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

infouni a2a[];
infouni a2b2;
infouni a2c;
infouni a2d;
infouni a2e;
infouni a2f;


info struca1()
{
    info a1;
    int i =0;
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
   // char ifcond = "0";
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

info print2(info b){
   // char ifcond = "0";
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

info fprint(info b){
   printf(".");
   FILE *pf;
   pf = fopen("reciept.txt","w");
   fprintf(pf,"Marca: %s \n",b.brand);
   fprintf(pf,"Modelo: %s \n",b.devicemodel);
   return b;
}

int one(){
    int datainputint = 0;
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
        }
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
    int datainputint = 0;
    printf("\n");
    info c;
    c = struca1();
    printf(" \n Desea ver las especificacione de sus dispositivos? \n");
    scanf("%d",&datainputint);
     if (datainputint == 0) {
        printf("\n Especificaciones del producto 2: \n");
        print(c);
      }
  return 0;
}

int three() {
    printf("\n");
    info d;
    d = struca1();
    printf(" \n Desea ver las especificacione de sus dispositivos? \n");
    scanf("%d",&datainputint);
     if (datainputint == 0) {
        printf("\n Especificaciones del producto 3: \n");
        print(d);
      }
    return 0;
}

int four(){
    printf("\n");
    info e;
    e = struca1();
    printf(" \n Desea ver las especificacione de sus dispositivos? \n");
    scanf("%d",&datainputint);
     if (datainputint == 0) {
        printf("\n Especificaciones del producto 4: \n");
        print(e);
      }
    return 0;
}

int five(){
    printf("\n");
    info f;
    f = struca1();
    printf(" \n Desea ver las especificacione de sus dispositivos? \n");
    scanf("%d",&datainputint);
     if (datainputint == 0) {
        printf("\n Especificaciones del producto 5: \n");
        print(f);
      }
    return 0;
}

int main(){ 
    int datainputint = 0; 


    printf("Cuantos productos desea almacenar? (maximo 5)\n"); 
    scanf("%d",&datainputint);
    printf("\n En caso de no conocer el parametro coloque 0 \n");
    cbuf();
    switch (datainputint)
    {
    case 1:
        printf("\n Producto 1: \n");
        one();
        printf("Desea imprimir los productos ingresados? \n");
        scanf("%d",&datainputint);
        if (datainputint == 0) {
           print2(a2b2);
        }
        break;  
    case 2:
        printf("\n Producto 1: \n");
        one();
        printf("\n Producto 2: \n");
        two();        
        break;
    case 3:
        printf("\n Producto 1: \n");
        one();
        printf("\n Producto 2: \n");
        two(); 
        printf("\n Producto 3: \n");
        three();
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
        break;    
    default:
        break;
    }

    

    return 0;
}