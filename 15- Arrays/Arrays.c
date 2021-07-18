#include <stdio.h>


int main()
{
 int vector [10];//un array se marca con el corchete [] y significa varias variables juntas, en este caso 10.
 int index;//index es una variable que nosotros creamos para crear una serie de patentes para nuestro programa, un codigo unico para cada una.
    /*
    vector 0 = adress 0x00 == 0
    vector 1 = adress 0x04 == 1
    vector 2 = adress 0x08 == 2
    vector 3 = adress 0x12 == 3
    vector 4 = adress 0x16 == 4
    vector 5 = adress 0x20 == 5
    vector 6 = adress 0x24 == 6
    vector 7 = adress 0x28 == 7
    vector 8 = adress 0x32 == 8
    vector 9 = adress 0x36 == 9
    */

    vector [2] = 5;

    printf("En la tercera del arreglo la variable vale %d", vector [2]);

    for (index = 0; index <10; index++)
{
    vector[index]=index;
}
    for(index = 0; index <10; index++)
{
    printf("\nVector[%d]= %d",index,vector[index]);
    printf("\nVector[%d]= %p",index,&vector[index]);//el simbolo & ampersands(at) sirve para buscar una direccion / tambien se combina con %p
}
return 0;
}
