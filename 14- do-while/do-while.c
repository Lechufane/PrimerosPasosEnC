#include<stdio.h>


int main()
{
    while(1==0)//Es FALSO, no va a pasar nada.
{
    printf ("While statement");
}
    do
{
    printf("Do-While");//mientras while sea falso, se corre do SOLO UNA VEZ. Casi como un "default".
}
    while(1 == 0);//Este while forma parte del DO anterior.

    while (1==1)
    {
        printf("\nEste mensaje sera eterno");
    }
}
