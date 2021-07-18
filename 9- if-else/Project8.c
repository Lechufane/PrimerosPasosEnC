#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    int c = 2;
    int d = 5;

    if (a == 5 && b == 10)
        printf("True");
    else
        if (a == 5 || b == 10)
        printf("Parcially true");
        else
        printf("False");


    if (a == 5)
        printf("\nH");
    if (b == 10)
        printf("\nO");
    if (c == 2)
        printf("\nL");
    if (d == a)
        printf("\nA");

}
