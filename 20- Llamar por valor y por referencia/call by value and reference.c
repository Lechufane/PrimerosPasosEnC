#include <stdio.h>
#include <math.h>


void invertir_2_valores(int *variablea, int *variableb)//Esta es una funcion que hace la inversion de los valores
{/*cuando enviamos una variable a una funcion como en este caso,
no mandamos la direccion de la funcion, solo una copia del valor.
en este caso es a y b pero no hemos modifiado la direccion de a y b*/

    int auxiliar;
    auxiliar=*variablea;//Los punteros sirven para enviar el valor de una direccion(adress) a un funcion
    *variablea=*variableb;//Los valores de adress no son enviados caundo se envia una variable a una funcion.
    *variableb=auxiliar;

}

int main()//Esto sirve para invertir 2 valores.
{
    int a;
    int b;
    a=5;//0x00
    b=10;//0x04
    printf("\nantes");
    printf("\nValor de a es %d",a);
    printf("\nValor de b es %d",b);

    invertir_2_valores(&a,&b);
    printf("\ndespues");
    printf("\nValor de a es %d",a);
    printf("\nValor de b es %d",b);
}
