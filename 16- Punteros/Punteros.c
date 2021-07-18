#include <stdio.h>


int main()


{

    double variable_e = 10;
    double *pointer_to_a;
    double *pointer_to_b;

    pointer_to_a = &variable_e;
    pointer_to_b = &pointer_to_a;//los punteros solo apuntan a direccion (Adress) nunca a un valor.
//cuando usammos el simbolo &ampersands (at) es porque necesitamos trabajar o acceder a la direccion (adress) de la variable.
//*pointer_to_a necesitas trabajar o acceder al valor de la data que esta en el puntero
// pointer_to_a(sin ampersand ni asterisco)necesitas la direccion.

    printf("\nLa direccion de la variable e es %p", &variable_e);
    printf("\nEl valor de la variable e es %f", variable_e);
    printf("\nLa direccion de la variable e mostrada a traves del puntero es: %p", pointer_to_a);
    printf("\nEl valor de la variable a traves del puntero es: %f", *pointer_to_a);
    printf("\nLa direccion de la variable e es %p", &pointer_to_a);
    printf("\nEl valor de la variable e es %f", pointer_to_a);
    printf("\nLa direccion de la variable e mostrada a traves del puntero es: %p", pointer_to_b);
    printf("\nEl valor de la variable a traves del puntero es: %f", *pointer_to_b);











}
