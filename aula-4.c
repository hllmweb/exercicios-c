/*
Construir uma função que retorne o resto de uma divisão entre dois
números inteiros.
*/

#include <stdio.h>

void divisao(int num1,int num2){
    int result;

    result=num1%num2;
    printf("O resto eh:%d",result);

    return 0;
}

int main(){
    int num1,num2;

    printf("Entre com o primeiro numero:");
    scanf("%d",&num1);
    printf("Entre com o segundo numero:");
    scanf("%d",&num2);
    divisao(num1,num2);

    return 0;
}
