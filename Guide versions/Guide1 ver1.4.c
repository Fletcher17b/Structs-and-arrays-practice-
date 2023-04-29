#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
int datainputint = 0;
int opc_global = 0;
// function declarations start (this just so the annoying yellow marks dont show up)
int strcutexer_menu();
int main();
int exer1_mainfunc();
// function declaration end 

// struct bellow is used for exer 1 of structs
struct CNCproduct_info
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

struct CNCproduct_info a2a;

// input and output buffer clearer
void cleanbuff(){
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
  scanf("%d", &opc_global);
         switch (opc_global)
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

// function below fetches user data for ejer 1/struct: CNCproduct_info and returns said data by a buffer called "input"
struct CNCproduct_info readterfunc_exer1(int z)
{
    struct CNCproduct_info input;
    char dataimputchar[100] = "";  
    printf("\nProducto: %d \n",z);
    cleanbuff();
    printf("Ingrese la marca\n");
    gets(dataimputchar);
    strcpy(input.brand, dataimputchar);
    cleanbuff();

    printf("Ingrese el modelo del dispositivo \n");
    gets(dataimputchar);
    strcpy(input.devicemodel, dataimputchar);
    cleanbuff(); 


    printf("Ingrese el precio en dolares (obligatorio)\n");
    scanf("%f",&input.price);
    cleanbuff();

    printf("Ingrese cantidad de almacenamiento\n");
    gets(dataimputchar);
    strcpy(input.storagegb ,dataimputchar);
    cleanbuff();

    printf("Ingrese modelo del cpu\n");
    gets(dataimputchar);
    strcpy(input.cpumodel ,dataimputchar);
    cleanbuff();

     printf("Ingrese cantidad de ram\n");
    gets(dataimputchar);
    strcpy(input.ramcountgb ,dataimputchar);
    cleanbuff();

     printf("Ingrese tamaño de la pantalla\n");
    gets(dataimputchar);
    strcpy(input.screensize ,dataimputchar);
    cleanbuff();

     printf("Ingrese el modelo de la gpu\n");
    gets(dataimputchar);
    strcpy(input.gpumodel ,dataimputchar);
    cleanbuff();  
    return input;
};

// function fetchs a struct then prints said struct if the values aren't '0' (user asked to input 0 if desired value is unknown when entered)
struct CNCproduct_info printerfunc_exer1(struct CNCproduct_info b){
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
    cleanbuff();
   return b;
}

// function below fetches user data for ejer 2/struct: studentinfo and returns said data by a buffer called "in"
struct studentinfo readterfunc_exer2(int z) {
    struct studentinfo in;
    char inputchar[50] = ""; 

    printf("\nEstudiante #%d\n",z);
    printf("Ingrese su nombre\n");
    gets(inputchar);
    strcpy(in.nombres,inputchar);
    cleanbuff();

    printf("Ingrese sus apellidos\n");
    gets(inputchar);
    strcpy(in.apellidos,inputchar);
    cleanbuff();

    printf("Ingrese su ID\n");
    gets(inputchar);
    strcpy(in.ID,inputchar);
    cleanbuff();

    printf("Ingrese su edad\n");
    scanf("%d",&in.edad);
    cleanbuff();

    printf("Ingrese su sexo\n");
    gets(inputchar);
    strcpy(in.sexo,inputchar);
    cleanbuff();

    printf("Ingrese su facultad\n");
    gets(inputchar);
    strcpy(in.facultad,inputchar);
    cleanbuff();

    printf("Ingrese su carrera\n");
    gets(inputchar);
    strcpy(in.carrera,inputchar);
    cleanbuff();

    return in;
}

// function bellow recieves user data from readterfunc_exer2 and prints it
struct studentinfo printerfunc_exer2(struct studentinfo out) {

    printf("\nNombre del Estudiante: %s \n",out.nombres);
    cleanbuff();
    printf("Apellidos del Estudiante: %s \n",out.apellidos);
    cleanbuff();
    printf("Edad del Estudiante: %d \n",out.edad);
    cleanbuff();
    printf("ID del Estudiante: %s \n",out.ID);
    cleanbuff();
    printf("Facultad del Estudiante: %s \n",out.facultad);
    cleanbuff();
    printf("Carrera del Estudiante: %s \n",out.carrera);
    cleanbuff();

    return out;
}


// function bellow is used when program ends
int progend_func() {
    printf("Usted ha llegado al fin del programa, desea: \n volver a inicio(0)\n volver al menu de estructuras?(1)\n salir(2)\n ");
        scanf("%d",&datainputint); cleanbuff(); switch (datainputint)
        {
        case 0:
            system("pause");
            system("cls");
            main();
            break;
        case 1:
            system("pause");
            system("cls");
            strcutexer_menu
();
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
int exer1_mainfunc() {
    int i;
    int e = 0;
    int count = 0;
    struct CNCproduct_info a2a[20];
    printf("Cuantos productos desea guardar? (Maximo 20) \n");
    scanf("%d",&count);
    cleanbuff();
    while (count>20)
    {    printf("Usted planea ingresar demasiados productos a la vez \n porfavor segmente su ingreso de datos e intente denuevo\n");
        scanf("%d",&count);}
    for (i=1; i<=count;i++) {
        a2a[i] = readterfunc_exer1(i); 
        printf(" \n Desea ver las especificacione de su dispositivo mas reciente para comprobar ingreso de datos correcto? \n (1 = si, cualquier otra tecla = no) \n");
        scanf("%d",&datainputint);
        if (datainputint == 1) {
            printf("\n Especificaciones del producto %d: \n",i);
            printerfunc_exer1(a2a[i]);
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
        printerfunc_exer1(a2a[e]);
        progend_func();
        break;

    case 2: 
        printf("Usted ha elejido ver todos los productos ingresados, estos seran impresos a continuacion: \n");
        for (i=1;i<=count;i++) {
            printf("\n Especificaciones del producto %d: \n",i);
            printerfunc_exer1(a2a[i]);
        }
        progend_func();
        break;
    case 3: 
       progend_func();
        break;
    
    default:
        break;
    }
cleanbuff();


    return 0;
}

// Main function for exer 2 of structs
int exer2_mainfunc() {
    struct studentinfo data[40];  
     printf("Hola \n");
    int i;
    int e = 0;
    int count = 0;
    printf("Ingrese cantidad de alumnos que va a registrar (maximo 40) \n");
    scanf("%d",&count);
    cleanbuff();
    while (count>40)
    {    printf("Cantidad deseada saturara el sistema, segmente su ingreso de datos en cantidades mas pequenas\n");
        scanf("%d",&count);}
    for (i=1; i<=count;i++) {
        data[i] = readterfunc_exer2(i); 
        printf(" \n Desea ver datos del estudiante para comprobar? \n (1 = si, cualquier otra tecla = no) \n");
        scanf("%d",&datainputint);
        if (datainputint == 1) {
            printf("\n Datos del estudiante %d: \n",i);
            printerfunc_exer2(data[i]);
        }
    }
    printf("\nDesea ver la lista completa de estudiantes?(1 = si, otra tecla = no )\n");
    scanf("%d",&e);

    if (e==1) {
        for (i=1; i<=count;i++) {
        printf("\nEstudiante #%d\n",i);   
        printerfunc_exer2(data[i]);
    }
    }

    progend_func();
    return 0;
}

// nested structure of exer 3
struct infoper{
    char name[99];
    int edad;
    float estatura;
    char sexo[10];
};

// Main struct of exer 3 
struct atleta{
    struct infoper b;
    
    char ciudad[100];
    char deportes[100];
    int medallasoro;
    int medallasplata;
    int medallasbronze;
    
};

// Main function of exer 3
struct atleta readterfunc_exer3() {
    struct atleta a1;
    cleanbuff();
    char inputcharbuffer[100];
    
    printf("\nIngrese su nombre \n");
    gets(inputcharbuffer);
    strcpy(a1.b.name,inputcharbuffer);
    cleanbuff();

    printf("Ingrese edad \n");
    scanf("%d",&a1.b.edad);
    cleanbuff();

    printf("Ingrese estatura en metros \n");
    scanf(" %f",&a1.b.estatura);
    cleanbuff();

    printf("Ingrese sexo\n");
    gets(inputcharbuffer);
    strcpy(a1.b.sexo,inputcharbuffer);
    cleanbuff();
   // :'(
    printf("Ingrese ciudad \n");
    gets(inputcharbuffer);
    strcpy(a1.ciudad,inputcharbuffer);
    cleanbuff();

    printf("Ingrese deportes en los que participo \n");
    gets(inputcharbuffer);
    strcpy(a1.deportes,inputcharbuffer);
    cleanbuff();

    printf("Ingrese # medallas de oro \n");
    scanf("%d",&a1.medallasoro);
    cleanbuff();

    printf("Ingrese # medallas de plata  \n");
    scanf("%d",&a1.medallasplata);
    cleanbuff();

    printf("Ingrese # medallas de bronze \n");
    scanf("%d",&a1.medallasbronze);
    cleanbuff();

    return a1;
}

// Structure bellow recieves a struct and an int, then prints them
struct atleta printer_exer3(struct atleta z,int x) {
    
    printf(" \n\nDatos del atleta %d:\n",x);
    cleanbuff();
    printf("Nombre: %s \n", z.b.name);
    cleanbuff();
    printf("Edad: %d\n",z.b.edad);
    cleanbuff();
    printf("Estatura: %.2fm\n",z.b.estatura);
    cleanbuff();
    printf("Sexo: %s\n",z.b.sexo);
    cleanbuff();
    printf("Ciudad: %s\n",z.ciudad);
    cleanbuff();
    printf("Deportes en los que participo: %s\n",z.deportes);
    cleanbuff();
    printf("Medallas de oro: %d\n",z.medallasoro);
    cleanbuff();
    printf("Medallas de plata: %d\n",z.medallasplata);
    cleanbuff();
    printf("Medallas de bronze: %d\n\n",z.medallasbronze);
    cleanbuff();

    return z;
}

//
int exer3_mainfunc(){
    struct atleta fin[5];
    int i=0;
    int e=1;
    int q = 0;
    int count = 0;

    printf("Ingrese numero de atletas que desea, maximo 5 \n");
    scanf("%d",&count);

    while (count > 5) {
        printf("El maximo es 5, ingrese una cantidad menor\n");
        scanf("%d",&count);
    }
    
    for (i=1;i <= count;i++) {
        fin[i] = readterfunc_exer3();
    }
    i =0;
    
    printf("desear ver los datos de un deportista especifico? o desea verlos todos?(2) \n");
    scanf("%d",&q);
    
    switch (q)
    {
    case 1:
        printf("Ingrese el numero del deportista que quiere\n");
        scanf("%d",&e);
        printer_exer3(fin[e],e);
        progend_func();
        break;
    case 2:
        printf("Atletas: \n");
        
        for (i=1;i <= count;i++) {
           printer_exer3(fin[i],i);
    }
        progend_func();
        break;
    default:
        printf("opcion invalida\n");
        progend_func();
        break;
    }
    

    

    return 0;
}

// Menu for structures
int strcutexer_menu(){
    int opcstruct = 0;
    printf("Ingrese el numero del ejercicio que quiere ver y 4 para volver al menu \n");
    scanf("%d", &opcstruct);
    cleanbuff();
    switch (opcstruct)
    {
    case 1:
    exer1_mainfunc();  
        break;  
    case 2:
    exer2_mainfunc();
        break;
    case 3:
    exer3_mainfunc();
        break;
    default:
    printf("Usted ha ingresado un valor invalido sus opciones son las siguientes, presione: \n 0 para volver al menu principal\n 1 para reinciar este menu\n 2 para salir\n");
    scanf("%d",&datainputint);
    cleanbuff();
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
        strcutexer_menu();
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
cleanbuff(); 
scanf("%d",&opc);
cleanbuff();

switch (opc)
{
case 0:
    printf("Los arreglos seran mostrados a continuacion \n"); 
    cleanbuff();
    system("pause");
    system("cls");
    arrayfunc();
    break;
case 1:
    printf("Las estructuras seran mostradas a continuacion \n"); 
    cleanbuff();
    system("pause");
    system("cls");
    strcutexer_menu
();
    break;

case 2:
    printf("Pase un buen dia \n"); 
    cleanbuff();
    break;

default:
  printf("Usted Ingreso un valor invalido \n");
  printf("Desea cerrar o reinciar el programa?\n (presione 2 para reiniciar, cualquier otra tecla para cerrar) \n");
  scanf("%d", &opc_global);
  if (opc_global == 2) {
    system("cls");
    cleanbuff();
    main();
  } else {}

    break;
}
    return 0;
}