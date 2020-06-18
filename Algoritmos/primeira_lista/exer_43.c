#include<stdio.h>
#include<stdlib.h>

main() {
    float celsius, fahrenheit;

    printf("Informe uma temperatura (em celsius) => ");
    scanf("%f", &celsius);

    fahrenheit = (celsius*1.8) + 32;

    printf("Temperatura em celsius: %f \n", celsius);
    printf("Temperatura em fahrenheit: %f \n", fahrenheit);
}