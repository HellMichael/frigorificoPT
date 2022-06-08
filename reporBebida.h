#ifndef REPORBEBIDA_H_INCLUDED
#define REPORBEBIDA_H_INCLUDED


float relat(a,v,s){
float c,d;


printf("\t\t**********RELATÓRIO*************\n\n");

if(a < 2){
    c = 5 - a;
    d = c * agua;
    printf("\t\tComprar %.0f água(s) para atingir 5 no stock\n",c);
    printf("\t\tCada garrafa custa 0.80EUR, portanto %.2fEUR\n",d);
    printf("\t\tValor arredondado para baixo %.0f\n\n",floor(d));
}

if (v <= 2){
    c = 5 - v;
    d = c * vodka;
    printf("\t\tComprar %.0f vodka(s) para atingir 5 no stock\n",c);
    printf("\t\tCada garrafa custa 1.10EUR, portanto %.2fEUR\n",d);
    printf("\t\tValor arredondado para baixo %.0f\n\n",floor(d));
}

if(s<=2){
    c = 5 - s;
    d = c * sumo;
    printf("\t\tComprar %.0f sumo(s) para atingir 5 no stock\n",c);
    printf("\t\tCada garrafa custa 1.50EUR, portanto %.2fEUR\n",d);
    printf("\t\tValor arredondado para baixo %.0f\n\n",floor(d));
}
}

#endif // REPORBEBIDA_H_INCLUDED
