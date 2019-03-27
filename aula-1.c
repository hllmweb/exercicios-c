/*
Fazer um programa para calcular o imc e mostrar em que categoria a
pessoa se encontra.
• Cálculo IMC = massa / (altura * altura)
*/

#include <stdio.h>


int imc(float massa, float altura){
    float calc_imc;
    calc_imc = massa / (altura * altura);
    return calc_imc;
}

int main(){
    float massa, altura, calc;
    printf("Peso: ");
    scanf("%f", &massa);

    printf("Altura: ");
    scanf("%f",&altura);
    calc = imc(massa, altura);

    printf("%0.2f", calc);
    return 0;
}
