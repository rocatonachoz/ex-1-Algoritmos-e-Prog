#include <stdio.h>
#include <math.h>

int main ()
{
    //Definindo variáveis e inputs
    float cat1, cat2, hipo;

    printf("Insira dois valores de catetos de um triângulo para calcular a hipotenusa: ");
    scanf("%f, %f", &cat1, &cat2);

    //Calculando hipotenusa
    hipo = sqrt((pow(cat1, 2)) + (pow(cat2, 2)));

    //Imprimindo resultado 
    printf("Um triângulo retângulo com lados %f e %f tem uma hipotenusa igual a %f", cat1, cat2, hipo);

    return 0;
}