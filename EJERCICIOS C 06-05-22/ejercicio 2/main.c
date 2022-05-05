#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;

    printf("Ingrese la nota del alumno\n");
    scanf("%f", & nota);
    if(nota>=6){

        printf("Alumno Aprobdo");

    }
    else{
        printf("Alumno Desaprobado");
    }
    return 0;
}
