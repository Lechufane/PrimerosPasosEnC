#include <stdio.h>


int main()
{

    int a = 5;
    int b = 10;

    if (a ==7 && b == 10)// && ampersand significa Y como conector, en este caso si ambos fueran verdaderos seria cierto.
    printf("True\n");
    else
    printf ("False\n");

    if (a==4 || b == 10)// || or significa O, en este caso si uno o el otro es verdadero es correcta la afirmación.
    printf("True\n");
    else
    printf("False\n");

    if (a != 5)//si a es diferente != al numero, entonces es verdadero.
    printf("True");
    else
    printf("False");

}
