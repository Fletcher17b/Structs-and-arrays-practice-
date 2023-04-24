#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>

int datainputint;

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
  

    return 0;
}
//info fprint(info b){
 //  printf(".");
 //  FILE *pf;
 //  pf = fopen("reciept.txt","w");
 //  fprintf(pf,"Marca: %s \n",b.brand);
 //  fprintf(pf,"Modelo: %s \n",b.devicemodel);
 //  return b;}