#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>

int datainputint;
char dataimputchar[100] = ""; 

void cbuf(){
    fflush(stdin);
    fflush(stdout);
}

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


int main(){ 
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

    

    return 0;
}
//info fprint(info b){
 //  printf(".");
 //  FILE *pf;
 //  pf = fopen("reciept.txt","w");
 //  fprintf(pf,"Marca: %s \n",b.brand);
 //  fprintf(pf,"Modelo: %s \n",b.devicemodel);
 //  return b;}