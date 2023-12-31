#include <stdio.h>

int main() {

    //Exercise1-3

    float fahren, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahren = lower;

    printf("Exercise1-3\n");
    printf("%10s\t%10s\n", "Fahrenheit", "Celsius");
    while(fahren <= upper){
        celsius = (5.0/9.0)*(fahren - 32.0);
        printf("%10.0f\t%10.1f\n", fahren, celsius);
        fahren = fahren + step;
    }

    //Exercise1-4

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Exercise1-4\n");
    printf("%10s\t%10s\n", "Celsius", "Fahrenheit");
    while(celsius <= upper){
        fahren = celsius*(9.0/5.0) + 32;
        printf("%10.0f\t%10.1f\n", celsius, fahren);
        celsius = celsius + step;
    }
    
    return 0;
}