#include <stdio.h>
#include <math.h>


/*Funcion para la suma*/
void suma2numeros(float variable_a,float variable_b)
{
    float suma;
    suma = variable_a + variable_b;

    return suma;
}
/*Funcion para la resta*/
float resta2numeros(float variable_a,float variable_b)
{
    float resta;
if (variable_a > variable_b)
{
    resta = variable_a - variable_b;
}
else
{
    resta = variable_b - variable_a;
}

    return resta;
}
/*Funcion para dividir*/
float dividir2numeros(float variable_a,float variable_b)
{
    float div;

if (variable_a > variable_b)
{
    div = variable_a / variable_b;
}
else
{
    div = variable_b / variable_a;
}
return div;
}
/*Funcion para multiplicar*/
float multiplicar2numeros(float variable_a,float variable_b)
{
    float mult;
    mult = variable_a * variable_b;

    return mult;
}
float raizcuadrada(float variable)
{
    float resultado = sqrt(variable);
    return resultado;
}



int main()
{
while (1==1)//igual que
{
system ("cls");//de clear screen
    float numero1,numero2;
    int switch_variable;

    printf("Por favor ingrese un numero: ");
    scanf("%f", &numero1);
    printf("\nPor favor ingrese otro numero: ");
    scanf("%f", &numero2);
    printf("\nPor favor elija una opcion: ");
    printf("\n1. Sumar");
    printf("\n2. Restar");
    printf("\n3. Dividir");
    printf("\n4. Multiplicar");
    printf("\n5. Raiz cuadrada");
    printf("\nElija: ");
    scanf("%d",&switch_variable);

switch(switch_variable)
{
case 1:
    printf("\nLa suma de ambos es %f",suma2numeros(numero1,numero2));
break;
case 2:
    printf("\nLa resta de ambos es %f",resta2numeros(numero1,numero2));
break;
case 3:
if (numero1== 0 || numero2 == 0)
{
printf("\n0");
}
else
{
printf("\nLa division de ambos es %f",dividir2numeros(numero1,numero2));
}
break;
case 4:
    printf("\nLa multiplicacion de ambos es %f",multiplicar2numeros(numero1,numero2));
break;
case 5:
    printf("\nLa raiz cuadrada del primer numero es %f", raizcuadrada(numero1));
    printf("\nLa raiz cuadrada del segundo numero es %f", raizcuadrada(numero2));
break;

default:
    printf("Esta no es una operacion valida");
break;
}
getchar();
getchar();
}
return 0;
}
