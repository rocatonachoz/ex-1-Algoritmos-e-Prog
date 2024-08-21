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
    printf("O IMC de uma pessoa com peso: %.2f kg e altura %.2f m é igual a %.2f:", peso, altura, imc); 

    return 0;
}