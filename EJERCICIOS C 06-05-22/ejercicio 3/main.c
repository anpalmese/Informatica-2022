#include <stdio.h>
#include <stdlib.h>

int main()
{
   float base, altura, area;


   printf("ingrese el valor de la base: ");
   scanf("%f", &base);

   while(base<=0){
    printf("Error, la base debe medir mas que 0, reingrese un valor: ");
    scanf("%f", &base);
   }

   printf("ingrese el valor de la altura: ");
   scanf("%f", &altura);

   while(altura<=0){
    printf("Error, la altura debe medir mas que 0, reingrese un valor: ");
    scanf("%f", &altura);
   }

   area = (base * altura)/2;


    printf("El area ede su triangulo vale: %.2f", area);
    return 0;
}
