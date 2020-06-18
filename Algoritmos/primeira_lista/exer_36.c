#include<stdio.h>
#include<stdlib.h>

main() {
	float deposito, juros, rendimento, total;
	
	printf("Informe o valor do deposito => ");
	scanf("%f", &deposito);
	printf("Informe o valor da taxa de juros => ");
	scanf("%f", &juros);
	
	rendimento = (deposito * juros) / 100;
	total = deposito + rendimento;
	
	printf("Seu deposito de %f teve um rendimento de %f e o total é = %f", deposito, rendimento, total); 
	
	system("pause");
}
