#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>

void cbuf(){
    fflush(stdin);
    fflush(stdout);
}

struct studentinfo
{
    char nombres[50];
    char apellidos [50];
    int edad;
    int sexo;
    char facultad[70];
    char carrera[50];
    

};





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