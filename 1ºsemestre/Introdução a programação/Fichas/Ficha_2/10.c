//Escreva um programa que dada uma data composta pelo m�s e o ano (valores
//inteiros introduzidos atrav�s do teclado), calcula e escreve no terminal o n�mero
//de dias desse m�s. Um ano � bissexto se e s� se o ano for divis�vel por 4 mas
//n�o por 100 ou ent�o for divis�vel por 400. Por exemplo: 1980, 1984, 2004 foram
//bissextos; 1800, 1900, foram anos comuns, mas 2000 foi bissexto.
#include<stdio.h>
void main(){
int mes,ano;

printf("digite um mes(1 a 12): ");
scanf("%d",&mes);

printf("digite um ano: ");
scanf("%d",&ano);

switch(mes){
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    printf("O mes %d tem 31 dias",mes);
    break;
case 2:
    printf("o mes %d tem 28 ou 29 dias",mes);
    break;
case 4:
case 6:
case 9:
case 11:
    printf("o mes %d tem 30 dias",mes);
    break;
default:
    printf("%d nao corresponde a nenhum mes",mes);
    break;
}

if(ano/4 && !(ano/100) || ano/400){
    printf(" e %d e um ano bissexto",ano);
}
else {
    printf(" e %d nao e um ano bissexto",ano);
}
}
