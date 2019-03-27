/*
Desenvolva um algoritmo em C que em função informe ao usuário em tela as mensagens :
“VERDADEIRO”: Quando o usuário informar no positivo (exemplo: 1,2,3,4,5 );
“FALSO”: Quando o usuário informar no negativo (ex.: -1,-2,-3 etc)
“VOCÊ PRECISA SELECIONAR UMA DAS OPÇÕES”: Quando o usuário informar valor Nulo (0).
*/

#include <stdio.h>
void verificacao(int num){
     if(num >= 1)
            printf("VERDADEIRO");
        else if(num <= -1)
            printf("FALSO");
        else{
            printf("NULO (0)");
            printf("\nVC PRECISA SELECIONAR UMA DAS OPCOES\n\n");
            printf("> QUE 0(zero) \n< QUE 0(zero) \n\n");
            main();
        }
}

int main(){
    int num;
    printf("NUMERO: ");
    scanf("%d", &num);
    verificacao(num);

    return 0;
}
