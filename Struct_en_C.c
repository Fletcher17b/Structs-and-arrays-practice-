#include<stdio.h>

struct Estudiante{
    int Id;
    char nombres[50];
    char apellidos[50];
    char carrera[100];
    int edad;
    char sexo;
};

int main(int argc, char const *argv[])
{

    struct Estudiante est;
    printf("*** Datos del Estudiante ***\n");
    printf("ID: ");
    scanf("%d", &est.Id);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("Nombres: ");
    gets(est.nombres);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("apellidos: ");
    gets(est.apellidos);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("carrera: ");
    gets(est.carrera);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("Edad: ");
    scanf("%d", &est.edad);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("Sexo: ");
    scanf("%c", &est.sexo);
    printf("\n");

    printf("*** Datos Registrado del Estudiante ***\n");
    printf("ID: %d \n", est.Id);
    fflush(stdout);
    printf("Nombres: %s \n", est.nombres);
    fflush(stdout);
    printf("Apellidos: %s \n", est.apellidos);
    fflush(stdout);
    printf("Carrera: %s \n", est.carrera);
    fflush(stdout);
    printf("Edad: %d \n", est.edad);
    fflush(stdout);
    printf("Sexo: %c >> M: Masculino y/o F: Femenino \n", est.sexo);
    fflush(stdout);
    

    return 0;
}