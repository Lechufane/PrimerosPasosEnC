#include <stdio.h>
#include <math.h>

int main()
{ float a,b;
  int choose;
  int choose2;
  int fahrenheit = 0;
  double celsius;
  int limite;
  float numero1, numero2, numero3;
  float media;
while (1 != 0)
{
    system ("cls");
    printf("Por favor, elija una opcion: ");
    printf("\n1. Calculadora.");
    printf("\n2. Conversor fahrenheit a celsius.");
    printf("\n3. Media Aritmetica\n");
    scanf("%d",&choose);
switch (choose)
{
case 1:
{
    printf("\nPrimero elija un numero a: ");
    scanf("%f",&a);
    printf("Ahora elija un numero b: ");
    scanf("%f",&b);

    printf("Por favor elije una operacion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Dividir\n");
    printf("4. Multiplicar\n");
    printf("5. Potencia\n");
    printf("6. Raiz cuadrada\n");
    scanf("%d",&choose2);

    switch (choose2)//seleccionador!
{
case 1:
    printf("La suma de a y b es igual a %f",a+b);
    break;//siempre poner break en los casos de un switch.
case 2:
    printf("a menos b es igual a: %f", a-b);
    printf("\nb menos a es igual a: %f", b-a);
    break;
case 3:
    printf("a divido b es igual a: %f",a/b);
    printf("\nb divido a es igual a: %f",b/a);
    break;
case 4:
    printf("\na por b es igual a: %f",a*b);
    break;
case 5:
    printf("a potencia b es igual a: %f",pow(a,b));
    printf("\nb potencia a es igual a: %f",pow(b,a));
    break;
case 6:
    printf("La raiz cuadrada de a es: %f",sqrt(a));
    printf("\nLa raiz cuadrada de a es: %f",sqrt(b));
    break;

default://Por si elijen un numero no valido
    printf("Porfavor ponga un numero del 1 al 6");
}
}
break;
case 2:
    printf("Hola, hasta cuantos grados Celsius quisieras convertir? ");
    scanf("%d",&limite);
while (fahrenheit <= limite)
{
    celsius = 5.0/9.0 * (fahrenheit - 32);
    printf("\n%d fahrenheit es igual a %f celsius",fahrenheit,celsius);
    fahrenheit++;
}
break;
case 3:
    printf("\npor favor ingrese el primer numero: ");
    scanf ("%f", &numero1);
    printf("\npor favor ingrese el segundo numero: ");
    scanf ("%f", &numero2);
    printf("\npor favor ingrese el tercer numero: ");
    scanf ("%f", &numero3);
    media = (numero1 + numero2 + numero3) / 3;
    printf("\nLa media es: %f",media);
    break;
default:
    printf("Solo hay 3 opciones capo.");
    break;
}
getchar();//getchar evita que los resultados se muestren demasiado rapido como para no poder leerse
getchar();//usa 2 getchar porque con una los resultados se siguen viendo rapido
}
return 0;
}
