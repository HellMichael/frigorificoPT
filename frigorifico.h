#ifndef FICHEIRO_H_INCLUDED
#define FICHEIRO_H_INCLUDED

#define agua 0.80
#define vodka 1.10
#define sumo 1.50


#include "reporBebida.h"


//incluir opção de requerir mais que uma bebida


int frigo(){

int b,c,re;
int capacidade=15,ag=5,le=5,su=5;

do{

printf("\t\t******FRIGORIFICO INTELIGENTE*******\n\t\t\tCAPACIDADE MÁXIMA 15\n\t\t\tCAPACIDADE ATUAL %i\n",capacidade);
printf("\t\t\t    **STOCK**\n\n");
printf("\t\tProduto   -    Preço      -    Stock\n\t\t1)Água    -    0.80EUR    -    %i\n\t\t2)Vodka   -    1.10EUR    -    %i\n\t\t3)Sumo    -    1.50EUR    -    %i\n\n",ag,le,su);
printf("Para retirar prima 1\nPara repor prima 2\nPara ver relatório prima 9\nPara sair prima 0\n");
scanf("%i",&b);

switch(b){

    case 1 :printf("Para retirar água prima 1, para retirar vodka prima 2, para retirar sumo prima 3\n");
            scanf("%i",&c);
        if (c>0 && c<4){

                printf("Quantidade desse produto a retirar:\n");
                scanf("%i",&re);
                switch(c){
                case 1:
                    if (ag>=re){
                    printf("retirou %i água(s)\n",re);
                    printf("Preço de %.2fEUR\n",agua * re);
                    ag = ag - re;
                    capacidade = capacidade - re;
                    }
                    else{
                    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ERRO !!! @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
                    sleep(1);
                    }

                break;
                case 2:
                    if (le>=re) {
                    printf("retirou %i vodka(s)\n",re);
                    printf("Preço de %.2fEUR\n",vodka * re);
                    le = le - re;
                    capacidade = capacidade - re;
                    }
                    else{
                    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ERRO !!! @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
                    sleep(1);
                    }
                break;
                case 3:
                    if (su>=re){
                    printf("retirou %i sumo(s)\n",re);
                    printf("Preço de %.2fEUR\n",sumo * re);
                    su = su - re;
                    capacidade = capacidade - re;
                    }
                    else{
                    printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ERRO !!! @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
                    sleep(1);
                    }
                break;

                default: printf("\t\t\t\tDigite um número indicado\n");break;
                }

        }
        else {
        printf("Digite um número disponível\n");
        }

    ;break;



    case 2 :printf("Para repor água prima 1, para repor vodka prima 2, para repor sumo prima 3\n");
            scanf("%i",&c);

    if (c>0 && c<4){
                printf("Quantidade a repor:\n");
                scanf("%i",&re);
                switch(c){

                case 1:
                printf("repor %i água(s)\n",re);
                if (ag+le+su+re<15){
                ag = ag + re;
                capacidade = capacidade + re;
                }
                else{
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ERRO !!! @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ CAPACIDA MÁXIMA ATINGIDA @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
                }
                break;

                case 2:
                printf("repor %i vodka(s)\n",re);
                if (ag+le+su+re<15){
                le = le + re;
                capacidade = capacidade + re;
                }
                else{
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ERRO !!! @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ CAPACIDA MÁXIMA ATINGIDA @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
                }
                break;

                case 3:
                printf("repor %i sumo(s)\n",re);
                if (ag+le+su+re<15){
                su = su + re;
                capacidade = capacidade + re;
                }
                else{
                printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ERRO !!! @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ CAPACIDA MÁXIMA ATINGIDA @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
                }
                break;
                default: printf("\t\t\t\tDigite um número indicado\n");break;
                }
            }
            else {
            printf("Digite um número disponível\n");
            };break;



    default: printf("\t\t\t\tDigite um número indicado\n");break;
    case 0: printf("\t\t\t\tPremiu 0, o programa vai fachar\n");break;
    case 9: relat(ag,le,su);
            break;
}

}

while(capacidade<16 && b!=0 && ag>=0 && le>=0 && su>=0);
    printf("************CAPACIDADE  ATUAL DE %i********************\n",capacidade);
    printf("************CAPACIDADE MÁXIMA DE 15********************\n\n");

}








#endif // FICHEIRO_H_INCLUDED
