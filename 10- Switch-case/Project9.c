#include <stdio.h>

int main()
{
    int a;
    int b;
while (1 != 0)
{
    printf("Selecciona: ");
    scanf("%d", &a);
switch(a)
{
case 0:
    printf("Valor 0\n");
    printf("\nPor favor dentro de 0 elija nuevas opciones: ");
    scanf("%d", &b);
switch(b)
{
     case 1:
        printf("\nElejiste la opcion 1\n");
        break;
     case 2:
        printf("\nElejiste la opcion 2\n");
        break;
     default:
        printf("\nSolo tienes 2 opciones\n");
        break;
}
case 1:
    printf("Valor 1\n");
    break;
case 2:
    printf("Valor 2\n");
    break;
case 3:
    printf("Valor 3\n");
    break;
case 4:
    printf("Valor 4\n");
    break;
case 5:
    printf("Valor 5\n");
    break;
case 6:
    printf("Valor 6\n");
    break;
case 7:
    printf("Valor 7\n");
    break;
case 8:
    printf("Valor 8\n");
    break;
case 9:
    printf("Valor 9\n");
    break;
default:
    printf("\nElija valores del 0 al 9");
break;
}
}
return 0;
}
