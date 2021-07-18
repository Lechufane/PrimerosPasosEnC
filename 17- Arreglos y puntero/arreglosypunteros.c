#include <stdio.h>


int main()
{
    int array_1[5];
    int *pointer_to_array_1;
    pointer_to_array_1 = &array_1[0];// si pones array_1 o &array_1[0] es lo mismo
                                     //Un puntero incrementado incrementa la siguiente adress, si el array_1[0]fuerra 0x00 el proximo seria 0x04.
    array_1[0]= 100;
    array_1[1]=104;
    int i;

    printf("Ir al arrego directamente\n");
    printf("El valor del primer elemento del arreglo es %d", array_1[0]);
    printf("\nLa direccion del primer elemento del arreglo es %p", &array_1[0]);
    printf("\n\nIr al arreglo desde el puntero");
    printf("\nEl valor del primer elemento del arreglo es %d", *pointer_to_array_1);
    printf("\nLa direccion del primer elemento del arreglo es %p", pointer_to_array_1);//PONER EL AMPERSAND SIGNIFICA PONER LA DIRECCION DEL PUNTERO, NO LA DIRECCION QUE APUNTA.

    pointer_to_array_1++;//se podria escribir pointer_to_array_1 = &array[1] pero es mas facil con el ++ y se puede usar en un for.

    printf("\n\nEl valor del segundo elemento del arreglo es %d",*pointer_to_array_1);
    printf("\nLa direccion del segundo elemento del arreglo es %p",pointer_to_array_1);

    pointer_to_array_1 = &array_1[0];
    printf("\n\nIr al arrego directamente\n");
    printf("El valor del primer elemento del arreglo es %d", array_1[0]);
    printf("\nLa direccion del primer elemento del arreglo es %p", &array_1[0]);

for (i = 0; i < 5; i++)
{
    *pointer_to_array_1 = i;
    printf("\n\nEl valor del %d elemento o array [%d] del arreglo es %d",i,i,*pointer_to_array_1);
    printf("\nLa direccion del %d elemento o array [%d] del arreglo es %p",i,i, pointer_to_array_1);
    pointer_to_array_1++;
}
}
