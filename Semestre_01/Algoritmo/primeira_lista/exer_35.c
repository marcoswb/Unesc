#include<stdio.h>
#include<stdlib.h>

main() {
    float conta, gorjeta;

    printf("Informe o total da conta do restaurante => ");
    scanf("%f", &conta);
	
	gorjeta = (conta * 10) / 100;

    printf("A gorjeta é = %f \n", gorjeta); 
	
	system("pause");   
}
