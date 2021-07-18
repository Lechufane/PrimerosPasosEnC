#include <stdio.h>
#include <math.h>

int main()
{

    int a;
    int b;
    int c=10;

    printf("\nElija una variable para su raiz cuadrada: ");
    scanf("%d",&a);

    printf("\nLa raiz cuadrada de a es: %f\n",sqrt(a));


    printf("\nAhora elija nuevos valores para potencia: ");
    printf("\nValor a: ");
    scanf("%d",&a);

    printf("\nValor b: ");
    scanf("%d",&b);

    printf("\na potencia b es igual a: %f\n",pow(a,b));

    printf("Modulo es el resto de una division, modulo con 2: %d",c%3);//Si la variable c es igual a 10 entonces el modulo (resto de la division) deberia ser de 1.




























}
