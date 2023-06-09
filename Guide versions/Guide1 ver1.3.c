#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
int datainputint = 0;
int opcre = 0;
// function declarations start (this just so the annoying yellow marks dont show up)
int strucfunc();
int main();
int structeje1();
// function declaration end 

// struct bellow is used for exer 1 of structs
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

//struct bellow is used for exer 2 of structs
struct studentinfo
{
    char nombres[50];
    char apellidos[50];
    char ID[50];
    int edad;
    char sexo[50];
    char facultad[50];
    char carrera[50];
};

struct info2 a2a;

// input and output buffer clearer
void cbuf(){
    fflush(stdin);
    fflush(stdout);
}

// function below is the main function for array excersizes, hosts each excercise in a case 
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

// function below fetches user data for ejer 1/struct: info2 and returns said data by a buffer called "input"
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

// function fetchs a struct then prints said struct if the values aren't '0' (user asked to input 0 if desired value is unknown when entered)
struct info2 print(struct info2 b){
    printf("\n");
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

// function bel;ow fetches user data for ejer 2/struct: studentinfo and returns said data by a buffer called "in"
struct studentinfo infofetch(int z) {
    struct studentinfo in;
    char inputchar[50] = ""; 

    printf("\nEstudiante #%d\n",z);
    printf("Ingrese su nombre\n");
    gets(inputchar);
    strcpy(in.nombres,inputchar);
    cbuf();

    printf("Ingrese sus apellidos\n");
    gets(inputchar);
    strcpy(in.apellidos,inputchar);
    cbuf();

    printf("Ingrese su ID\n");
    gets(inputchar);
    strcpy(in.ID,inputchar);
    cbuf();

    printf("Ingrese su edad\n");
    scanf("%d",&in.edad);
    cbuf();

    printf("Ingrese su sexo\n");
    gets(inputchar);
    strcpy(in.sexo,inputchar);
    cbuf();

    printf("Ingrese su facultad\n");
    gets(inputchar);
    strcpy(in.facultad,inputchar);
    cbuf();

    printf("Ingrese su carrera\n");
    gets(inputchar);
    strcpy(in.carrera,inputchar);
    cbuf();

    return in;
}

// function bellow recieves user data from infofetch and prints it
struct studentinfo infoprint(struct studentinfo out) {

    printf("\nNombre del Estudiante: %s \n",out.nombres);
    cbuf();
    printf("Apellidos del Estudiante: %s \n",out.apellidos);
    cbuf();
    printf("Edad del Estudiante: %d \n",out.edad);
    cbuf();
    printf("ID del Estudiante: %s \n",out.ID);
    cbuf();
    printf("Facultad del Estudiante: %s \n",out.facultad);
    cbuf();
    printf("Carrera del Estudiante: %s \n",out.carrera);
    cbuf();

    return out;
}


// function bellow is used when program ends
int strucsend() {
    printf("Usted ha llegado al fin del programa, desea: \n volver a inicio(0)\n volver al menu de estructuras?(1)\n salir(2)\n ");
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
            printf("Bye");
            break;     
        default:
            break;
        }
    return 0;
}

// Main function for exer 1 of structs
int structeje1() {
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
        printf(" \n Desea ver las especificacione de su dispositivo mas reciente para comprobar ingreso de datos correcto? \n (1 = si, cualquier otra tecla = no) \n");
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
            printf("\n Especificaciones del producto %d: \n",i);
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

// Main function for exer 2 of structs
int structeje2() {
    struct studentinfo data[40];  
     printf("Hola \n");
    int i;
    int e = 0;
    int count = 0;
    printf("Ingrese cantidad de alumnos que va a registrar (maximo 40) \n");
    scanf("%d",&count);
    cbuf();
    while (count>40)
    {    printf("Cantidad deseada saturara el sistema, segmente su ingreso de datos en cantidades mas pequenas\n");
        scanf("%d",&count);}
    for (i=1; i<=count;i++) {
        data[i] = infofetch(i); 
        printf(" \n Desea ver datos del estudiante para comprobar? \n (1 = si, cualquier otra tecla = no) \n");
        scanf("%d",&datainputint);
        if (datainputint == 1) {
            printf("\n Datos del estudiante %d: \n",i);
            infoprint(data[i]);
        }
    }
    printf("\nDesea ver la lista completa de estudiantes?(1 = si, otra tecla = no )\n");
    scanf("%d",&e);

    if (e==1) {
        for (i=1; i<=count;i++) {
        printf("\nEstudiante #%d\n",i);   
        infoprint(data[i]);
    }
    }

    strucsend();
    return 0;
}

int structseje3() {

    return 0;
}
// Menu for structures
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
    // structeje3();
        break;
    default:
    printf("Usted ha ingresado un valor invalido sus opciones son las siguientes, presione: \n 0 para volver al menu principal\n 1 para reinciar este menu\n 2 para salir");
    scanf("%d",&datainputint);
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
// main
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