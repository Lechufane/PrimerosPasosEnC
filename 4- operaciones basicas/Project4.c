#include <stdio.h>
#include <math.h>

int main()
{
    printf("Operaciones basicas con numeros\n");

    int a = 5;
    int b = 100;
    float pi = 3.14;
    int c = 3;
    int sum;
    sum = a+b;
    int dif;

    printf("La suma de a y b es igual a %d", sum);
    printf("\nLa suma de a y b es igual a %d", a+b);

    printf("\nElija valor a: ");
    scanf("%d",&a);

    printf("\nElija valor b: ");
    scanf("%d",&b);

    sum = a+b;

    printf("\nLa suma de a y b es igual a %d", sum);
    printf("\nLa suma de a y b es igual a %d\n", a+b);

    printf("\nAhora elija nuevos valores para restar: ");
    printf("\nValor a: ");
    scanf("%d",&a);

    printf("\nValor b: ");
    scanf("%d",&b);

    dif = a-b;

    printf("\na menos b es igual a:%d", a-b);
    printf("\na menos b es igual a:%d\n", dif);

    printf("\nAhora elija nuevos valores para dividir: ");
    printf("\nValor a: ");
    scanf("%d",&a);

    printf("\nValor b: ");
    scanf("%d",&b);

    printf("\na divido b es igual a: %d\n",a/b);

    printf("\nAhora elija nuevos valores para multiplicar: ");
    printf("\nValor a: ");
    scanf("%d",&a);

    printf("\nValor b: ");
    scanf("%d",&b);

    printf("\na por b es igual a: %d\n",a*b);

    printf("\nAhora elija nuevos valores para potencia: ");
    printf("\nValor a: ");
    scanf("%d",&a);

    printf("\nValor b: ");
    scanf("%d",&b);

    printf("\na potencia b es igual a: %f\n",pow(a,b));

    printf("\nElija una variable para su raiz cuadrada: ");
    scanf("%d",&a);

    printf("\nLa raiz cuadrada de a es: %f\n",sqrt(a));

    printf("\nEl incremento de a es igual a 1 mas del numero que vale:");
    printf("\nElija un numero a: ");
    scanf("%d",&a);
    printf("\na incrementado es igual a: %d", ++a);

    printf("\nEl disminuido de a es igual a 1 menos del numero que vale:");
    printf("\nElija un numero a: ");
    scanf("%d",&a);
    printf("\na disminuido es igual a: %d\n", --a);

    printf("Modulo es el resto de una division, modulo con 2: %d",c%2);//Si la variable c es igual a 10 entonces el modulo (resto de la division) deberia ser de 1.



return 0;
}
