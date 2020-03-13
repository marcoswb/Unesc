#include<stdio.h>
#include<stdlib.h>

main() {
    float celsius, fahrenheit;

    printf("Informe a temperatura em Celsius => ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;

    printf("A temperatura em Fahrenheit é = %f \n", fahrenheit);    
}