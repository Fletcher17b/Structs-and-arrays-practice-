#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
int datainputint = 0;
void cbuf(){
    fflush(stdin);
    fflush(stdout);
}

struct info2
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
};



struct info2 struca1(int z)
{
    struct info2 input;
    char dataimputchar[100] = "";  
    printf("\nProducto: %d \n",z);
    cbuf();
    printf("Ingrese la marca\n");
    gets(dataimputchar);
    strcpy(input.brand, dataimputchar);
    cbuf();

    printf("Ingrese el modelo del dispositivo \n");
    gets(dataimputchar);
    strcpy(input.devicemodel, dataimputchar);
    cbuf(); 


    printf("Ingrese el precio en dolares (obligatorio)\n");
    scanf("%f",&input.price);
    cbuf();

    printf("Ingrese cantidad de almacenamiento\n");
    gets(dataimputchar);
    strcpy(input.storagegb ,dataimputchar);
    cbuf();

    printf("Ingrese modelo del cpu\n");
    gets(dataimputchar);
    strcpy(input.cpumodel ,dataimputchar);
    cbuf();

     printf("Ingrese cantidad de ram\n");
    gets(dataimputchar);
    strcpy(input.ramcountgb ,dataimputchar);
    cbuf();

     printf("Ingrese tamaño de la pantalla\n");
    gets(dataimputchar);
    strcpy(input.screensize ,dataimputchar);
    cbuf();

     printf("Ingrese el modelo de la gpu\n");
    gets(dataimputchar);
    strcpy(input.gpumodel ,dataimputchar);
    cbuf();  
    return input;
};
struct info2 print(struct info2 b){
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


int strucsend() {
    printf("Usted ha llegado al fin del programa, desea volver a inicio(0), volver al menu de estructuras?(1)  o salir (2)? ");
        scanf("%d",&datainputint); cbuf(); switch (datainputint)
        {
        case 0:
            system("pause");
            system("cls");
            //main();
            break;
        case 1:
            system("pause");
            system("cls");
            //strucfunc();
            break;
        case 2:
           printf("Bye");
            break;
                     
        default:
            break;
        }
    return 0;
}
int funcmain(){
    int i;
    int e = 0;
    int count = 0;
    struct info2 a2a[20];
    printf("Cuantos productos desea guardar? (Maximo 20) \n");
    scanf("%d",&count);
    cbuf();
    while (count>20)
    {    printf("Usted planea ingresar demasiados productos a la vez \n porfavor segmente su ingreso de datos e intente denuevo\n");
        scanf("%d",&count);}
    for (i=1; i<=count;i++) {
        a2a[i] = struca1(i); 
        printf(" \n Desea ver las especificacione de su dispositivo mas reciente para comprobar ingreso de datos correcto? \n (1 = no, cualquier otra tecla = si) \n");
        scanf("%d",&datainputint);
        if (datainputint == 1) {
            printf("\n Especificaciones del producto %d: \n",i);
            print(a2a[i]);
        }
    }
    printf("\n Usted ha terminado de ingresar sus dispositivos \n");
    printf(" Desea: \n 1. Ver un producto especifico \n 2. Ver todos los productos \n 3. No ver nada y salir\n");
    scanf("%d",&datainputint);
    system ("pause");
    system("cls");
    switch (datainputint)
    {
    case 1:
        printf("Usted ha elejido ver un producto en espeficico\n");
        printf("Ingrese el numero del producto \n");
        scanf("%d",&e);
        print(a2a[e]);
        strucsend();
        break;

    case 2: 
        printf("Usted ha elejido ver todos los productos ingresados, estos seran impresos a continuacion: \n");
        for (i=1;i<=count;i++) {
            print(a2a[i]);
        }
        strucsend();
        break;
    case 3: 
       strucsend();
        break;
    
    default:
        break;
    }
cbuf();


    return 0;
}

int main(){ 
    //int datainputint = 0; 
    //int numberofprods = 0;
    funcmain();

    

    return 0;
}