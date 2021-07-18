#include <stdio.h>


int main()
{
    int variable_a = 99;
    int incremento_i = 0;

while (variable_a > 1)//Mientras se cumpla la condicion va a trabajar aqui, cuando deje de cumplirse salta hacia abajo
{
        printf("\n%d . La variable a tiene un valor %d", incremento_i, variable_a);
        incremento_i++;
        variable_a--;
}
    printf("\nLa variable a ahora tiene un valor %d", variable_a);
}
