#include <stdio.h>
#include <math.h>

int main()
{
    float numero1, numero2, numero3;
    float media;

    printf("\npor favor ingrese el primer numero: ");
    scanf ("%f", &numero1);
    printf("\npor favor ingrese el segundo numero: ");
    scanf ("%f", &numero2);
    printf("\npor favor ingrese el tercer numero: ");
    scanf ("%f", &numero3);

    media = (numero1 + numero2 + numero3) / 3;

    printf("\nLa media es: %f",media);

}
