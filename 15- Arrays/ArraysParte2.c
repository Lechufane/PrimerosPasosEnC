#include <stdio.h>


int main()
{
    float array1[5];
    float array2[5];
    float suma_array[5];
    float suma = 0;
    int index;
    printf("Hola usuario");
    printf("Por favor dale valor a los elementos del primer array.\n");
for(index = 0; index < 5; index++)
{
    printf("\narray1[%d]= ",index);
    scanf("%f",&array1[index]);
}
    printf("---------------------------------");
for(index = 0; index < 5; index++)
{
    printf("\narray1[%d] = %.2f\n",index,array1[index]);
}
printf("\nAhora dale valor a los elementos del segundo array.\n");
for(index = 0; index < 5; index++)
{
    printf("\narray2[%d]= ",index);
    scanf("%f",&array2[index]);
}
    printf("---------------------------------");
for(index = 0; index < 5; index++)
{
    printf("\narray1[%d] = %.2f\n",index,array2[index]);
}
for(index = 0; index < 5; index++)
{
    suma_array[index] = array1[index] + array2 [index];//si quisieras restar simplemente cambia los signos
    printf("\nLa suma de array1 y array2 es igual a: Por el [%d] equivale a %.2f\n",index,suma_array[index]);
}
for(index = 0; index < 5; index++)
{
    suma = suma + suma_array[index];
}
    printf("La suma de todos los elementos es %f",suma);
}
