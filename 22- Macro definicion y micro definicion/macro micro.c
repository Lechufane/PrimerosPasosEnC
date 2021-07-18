#include <stdio.h>
#include <math.h>

int variableglobal;
#define MODE 3


#if (MODE==1)
#define NR_ELEMENTS 5 /*CONSTANTE NR_ELEMENTOS = 10
crea un valor constante asi si tenes que modificar varias
veces la constannte no necesitas ir y cambiarlo por cada vez que
aparezca*/
variableglobal = 1;

#elif(MODE==2)//ELSE-IF
#define NR_ELEMENTS 10
variableglobal = 2;

#elif (MODE==3)
variableglobal = 3;
#define NR_ELEMENTS 20
#endif//END IF

#ifndef NR_ELEMENTS
#define NR_ELEMENTS 3
variableglobal=0;
#endif//IF NOT DEFINED
int main()
{
    /*vamos a usar 3 modos:
    MODO 1: ARREGLO DE 5
    MODO 2: ARREGLO DE 10
    MODO 3 ARREGLO DE 20*/

    int vector [NR_ELEMENTS];
    int i;
for (i=0; i < NR_ELEMENTS;i++)
    {
        printf("Bienvenido al modo: %d", variableglobal);
        printf("\nvector[%d] =", i);
        scanf ("%d", &vector[i]);
        printf("\nEl valor del vector[%d] es %d", i, vector[i]);
    }
}
