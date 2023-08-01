#include <stdio.h>

double convertToCelsius(int fahrenheit);

int main()
{
    printf("%12s %12s", "Fahrenheit", "Celsius");
    int fahren = 0;
    while (fahren <= 300)
    {
        printf("%12d - %9.1f\n", fahren, convertToCelsius(fahren));
        fahren += 20;
    }
}

double convertToCelsius(int fahren)
{
    return (fahren - 32) * (5.0 / 9.0);
}