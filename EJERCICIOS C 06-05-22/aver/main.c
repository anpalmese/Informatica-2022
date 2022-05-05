#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, eq;//x es la variable que le pido al usuario, eq es la funcion


    printf("Ingrese elvalor de x para la funcion F(x)=3x+2\n");
    scanf("%d", &x);//guardo el valor que ingrese el usuario en x
    eq = 3*x+2;

    printf("El resultado de f(x) es: %d", eq);
    return 0;
}
