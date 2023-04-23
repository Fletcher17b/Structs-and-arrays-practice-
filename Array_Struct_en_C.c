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
    struct Estudiante est[2];

    printf("*** Datos del Estudiante 1 ***\n");
    printf("ID: ");
    scanf("%d", &est[0].Id);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("Nombres: ");
    gets(est[0].nombres);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("apellidos: ");
    gets(est[0].apellidos);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("carrera: ");
    gets(est[0].carrera);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("Edad: ");
    scanf("%d", &est[0].edad);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("Sexo: ");
    scanf("%c", &est[0].sexo);
    printf("\n\n");
    
    printf("*** Datos del Estudiante 2 ***\n");
    printf("ID: ");
    scanf("%d", &est[1].Id);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("Nombres: ");
    gets(est[1].nombres);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("apellidos: ");
    gets(est[1].apellidos);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("carrera: ");
    gets(est[1].carrera);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("Edad: ");
    scanf("%d", &est[1].edad);
    printf("\n");
    fflush(stdout);
    fflush(stdin);
    printf("Sexo: ");
    scanf("%c", &est[1].sexo);
    printf("\n\n");

    printf("*** Datos Registrados del Estudiante 1 ***\n");
    printf("ID: %d \n", est[0].Id);
    fflush(stdout);
    printf("Nombres: %s \n", est[0].nombres);
    fflush(stdout);
    printf("Apellidos: %s \n", est[0].apellidos);
    fflush(stdout);
    printf("Carrera: %s \n", est[0].carrera);
    fflush(stdout);
    printf("Edad: %d \n", est[0].edad);
    fflush(stdout);
    printf("Sexo: %c >> M: Masculino y/o F: Femenino \n", est[0].sexo);
    fflush(stdout);
    printf("\n\n");
    printf("*** Datos Registrados del Estudiante 2 ***\n");
    printf("ID: %d \n", est[1].Id);
    fflush(stdout);
    printf("Nombres: %s \n", est[1].nombres);
    fflush(stdout);
    printf("Apellidos: %s \n", est[1].apellidos);
    fflush(stdout);
    printf("Carrera: %s \n", est[1].carrera);
    fflush(stdout);
    printf("Edad: %d \n", est[1].edad);
    fflush(stdout);
    printf("Sexo: %c >> M: Masculino y/o F: Femenino \n", est[1].sexo);
    fflush(stdout);
    printf("\n\n");





    return 0;
}