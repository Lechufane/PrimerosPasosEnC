#include <stdio.h>


int main()
{
    int fahrenheit = 0;
    double celsius;
    int limite;//Con esta variable determinamos el limite final para cuantos grados queremos convertir.
    printf("Hola, hasta cuantos grados Celsius quisieras convertir?");
    scanf("%d",&limite);
while (fahrenheit <= limite)
{
    celsius = 5.0/9.0 * (fahrenheit - 32);
    printf("\n%d fahrenheit es igual a %f celsius",fahrenheit,celsius);
    fahrenheit++;
}
}
