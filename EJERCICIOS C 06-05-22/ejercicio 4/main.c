#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1, nota2, nota3, prom;

    printf("Ingrese la 1ra nota: ");
    scanf("%f", &nota1);

    while(nota1 >7 || nota1<1){
    printf("Reingrese la 1ra nota por favor: ");
    scanf("%f", &nota1);
    }

    printf("Ingrese la 2da nota: ");
    scanf("%f", &nota2);

    while(nota2 >7 || nota2<1){
    printf("Reingrese la 2da nota por favor: ");
    scanf("%f", &nota2);
    }

    printf("Ingrese la 3ra nota: ");
    scanf("%f", &nota3);

    while(nota3 >7 || nota3<1){
    printf("Reingrese la 3ra nota por favor: ");
    scanf("%f", &nota3);
    }

    prom = (nota1+nota2+nota3)/3;



    printf("%.2f", prom);
    return 0;
}
