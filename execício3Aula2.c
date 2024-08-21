#include <stdio.h>

int main()
{
    //Atribuindo variáveis e definindo input 
    float temp, result;
    
    printf("Insira um valor de graus Celcius para converter para Fahrenheit: ");
    scanf("%f", &temp);

    //Realizando cálculo 
    result = (9/5 * temp) + 32;

    //Imprimindo resultados
    printf("Uma temperatura de %.2f °C equivale a %.2f °F.", temp, result);

    return 0;
}