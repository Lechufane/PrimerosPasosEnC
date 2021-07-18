#include <stdio.h>


int main()
{
    int a = 25;//0000.0000 0000.0000 0000.0000 0001 1001
              //byte 1     byte 2    byte 3    byte 4
    // & se llama AND (no es lo mismo que &&)
    // | se llama OR (no es lo mismo que ||)
    // ^ se llama XOR
    //comparativas de numero dan como resultado un numero binario segun la tabla.

    int number = 0xFF;
    printf("%d", sizeof(number));

    printf("\na antes de AND: %d",a);
    a = a & 17;
    printf("\na despues de AND: %d",a);

    a = 25;
    printf("\na antes de XOR: %d", a);
    a = a ^ 230;
    printf("\na despues de XOR %d", a);

    a = 25;
    printf("\na antes de OR: %d", a);
    a = a | 20;
    printf("\na despues de OR: %d", a);


    printf("\nNumero antes negado: %d",number);

    number = !number;

    printf("\nNumero negado despues: %d",number);

return 0;
}
