/*

Escrever uma função para fazer um programa que transforme
segundos em horas, minutos e segundos.
Ex.: 11030 = 3h 3min 50seg
2) Construir uma função que

*/
#include <stdio.h>

void convert(int second){
    int hour,min,seg,min_max;

    if (second>=60&&second<3600){
        min=second/60;
        printf("%d",min);
    }else if (second>=3600){
        hour=second/3600;
        min_max=second%3600;
        min=min_max/60;
        seg=min_max%60;

        printf("%dh %dmin %dseg",hour,min,seg);
    }else printf("%d",second);

    return 0;
}


int main(){
        int second;

        printf("Entre com os segundos a serem convertidos:");
        scanf("%d",&second);
        convert(second);

}
