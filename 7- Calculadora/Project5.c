#include <stdio.h>
#include <math.h>

int main()
{
    float a,b;
    int choose;

    printf("Bienvenido a mi primer calculadora.\n");
getchar();//(este se me ocurrio sol) el cartel del principio se mostraba muy rapido, le puse un getchar y ahora anda
    while (1 != 0)//mientras 1 sea diferente a 0 (loop)
{
    system ("cls");//Cuando termina el sistema limpia la pantalla

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
    scanf("%d",&choose);

    switch (choose)//seleccionador!
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
getchar();//getchar evita que los resultados se muestren demasiado rapido como para no poder leerse
getchar();//usa 2 getchar porque con una los resultados se siguen viendo rapido
}
return 0;//Volver a 0 para hacer un loop infinito.
}
