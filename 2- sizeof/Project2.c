#include <math.h>
#include <stdio.h>

int main ()
{
    //La funcion sizeof te permite saber la cantidad de bytes que tiene una variable
    // C tiene 4 tipos principales de variables: char (letras), int (numeros enteros), float (numeros con coma cortos) y double (el doble de float)
    // un byte tiene 8 bits

    char c = 'a';
    int a = 5;
    float b = 5.5;
    double d = 22.22222222222;

    printf("A char have: %d bytes:\n", sizeof(c));
    printf("An int have: %d bytes:\n", sizeof(a));
    printf("A float have: %d bytes:\n", sizeof(b));
    printf("A double have: %d bytes:\n", sizeof(d));
}
