#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cant,precio, total;
    float fin;

    printf("Cuantos metros cuadrados quiere comprar?: ");
    scanf("%d", &cant);

    while(cant <1 || cant>100){
    printf("la cantidad de metros debe estar entre 1 y 100.\n Reingrese la cantidad de metros que desea: ");
    scanf("%d", &cant);
    }


    printf("Cuantos cuesta el metro cuadrado?: ");
    scanf("%d", &precio);

    while(cant <1 || cant>100){
    printf("El precio del metro debe estar entre 100 y 5000.\n Reingrese el precio del metro cuadrado: ");
    scanf("%d", &precio);
    }


    total = cant * precio;
    fin= total * 5/100;




    printf("%.2f",fin);
    return 0;
}
