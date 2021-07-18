#include <stdio.h>
#include <string.h>//biblioteca para trabajar con strings

int main()
{
    char string_array1[20] = {"Esto es esparta"};//Un string es un array capaz de guardar caracteres (CHAR) en sus elementos.
    char string_array2[20] = {"Esto no e coca papi"};
    int i;
    printf("%s",string_array1);//%s se asocia a los strings

if (strcmp(string_array1,string_array2) == 0)
{
    printf("\nLos encordados son iguales");
}
else
{
    printf("\nNo son iguales");
}
    printf("\nPorfavor escriba una palabra: ");

for (i = 0; i < 20; i++)
{
    scanf("%c",&string_array1[i]);

}
    printf("%s",string_array1);
}
