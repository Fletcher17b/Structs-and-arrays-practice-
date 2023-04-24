#include <stdio.h>
#include <string.h>

struct Profesor
    {
        char nombre[20];
        char apellidos [50];
        char carrera[30];   
        int id;     
    }profe; //Se inicializa una variable llamada struct que de momento esta vacia

struct Persona{
    char nombre[20];
    char apellidos [50];
    int edad;
};

int main(){
    /*
    // Codigo con advertencia 
    profe.nombre[20]= 'Elsner';
    profe.apellidos[50]= 'Gonzalez';
    profe.carrera[30]= 'Ing. en Sistemas';
    */
   
    // Se inicializan los valores en la variable profe
    profe.id = 1234;
    strcpy(profe.nombre, "Elsner");
    strcpy(profe.apellidos, "Gonzalez");
    strcpy(profe.carrera, "Ing. en sistemas");
    char nombreusuario[20];
    scanf("%s", nombreusuario);
    strcpy(profe.nombre, nombreusuario);
    
    printf("El id del profesor es: %d \n", profe.id);
    printf("El nombre del profesor es: %s %s, imparte clases para la carrera: %s \n", profe.nombre, profe.apellidos, profe.carrera);

    // Otra manera de declarar estructuras, el orden debe ser el mismo en el que estan en la declaración de la estructura
    struct Profesor monitor = {"Andrea", "Nuñez", "Ing. en sistemas", 876};
    printf("El nombre del monitor es: %s %s, imparte clases para la carrera: %s\n", monitor.nombre, monitor.apellidos, monitor.carrera);
   
    struct Persona persona1 = {"Isabella", "Ruiz", 19};
    printf("%s %s, tiene %d años\n", persona1.nombre, persona1.apellidos, persona1.edad);

    // Se pueden cambiar los valores de una estructura
    strcpy(persona1.nombre, "Maria");
    persona1.edad = 20;
    printf("%s %s, tiene %d años", persona1.nombre, persona1.apellidos, persona1.edad);

    return 0;
}
