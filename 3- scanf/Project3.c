#include <stdio.h>

int main()
{
    printf("Hola usuario\n");
    printf("Hoy vamos a ver la funcion scanf\n");
    printf("Number: %d", 123);

    int a = 5;
    int b = 100;
    float pi = 3.14;


    printf("\nLa variable: a tiene un valor %d", a);
    printf("\nLa variable: b tiene un valor %d", b);
    printf("\nEl valor de pi es igual a: %f", pi);

    //Quien use el programa no va a tener acceso a los valores de la variable, para cambiar un valor de una variable se utiliza la funcion scanf.

    printf("\nPor favor introduzca un nuevo valor de a: ");
    scanf("%d", &a);
    printf("\nEl nuevo valor de a es: %d", a);

    printf("\nPor favor introduzca un nuevo valor de b: ");
    scanf("%d", &b);
    printf("\nEl nuevo valor de b es: %d", b);

    printf("\nPor favor, introduzca un nuevo valor para pi: ");
    scanf("%f", &pi);
    printf("\nEl nuevo valor de pi es: %f", pi);
}

