#include <stdio.h>

int main()
{
        int fahrenheit;
        double celsius;
while (1 != 0)
{
system ("cls");
        for (fahrenheit = 0; fahrenheit <= 100; fahrenheit++)
{
        celsius = 5.0/9.0 * (fahrenheit - 32);
        printf("\n%d grados fahrenheit son %f celsius",fahrenheit,celsius);
}
getchar ();
}
return 0;
}
