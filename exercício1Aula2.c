#include <stdio.h>

int main()
{
	//Pedindo e fornecendo inputs ao programa
	int a;
	int b;
	float resultado;
	
	printf("Escolha dois números inteiros para apresentar a soma, subtração, multiplicação e divisão deles:");
	//Realizando operações 
	scanf("%d %d", &a,&b);
	resultado = a + b;
	printf("A soma dos inteiros é: %.2f\n", resultado);
	resultado = a - b;
	printf("A subtração dos inteiros é: %.2f\n", resultado);
	resultado = a*b;
	printf("A multiplicação dos inteiros é: %.2f\n", resultado);
	resultado = a/b;
	printf("A divisão dos inteiros é: %.2f\n", resultado);
	
	return 0;
	
}