#include <stdio.h>

int main()
{
    float altura; 
    float peso;
    float imc;

    //Inputs
    printf("Insira o seu peso(kg):\n Insira a sua altura(m):\n");
    scanf("%f %f", &peso, &altura);

    //Cálculo de IMC
    imc = peso/(altura * altura);
    printf("O seu IMC é: %.2f", imc); 

    return 0;
}