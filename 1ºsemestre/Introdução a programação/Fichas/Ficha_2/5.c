//Escreva um programa que leia um n�mero inteiro e mostre uma mensagem indicando se o n�mero � par ou �mpar.
//Sugest�o: pode usar o operador resto da divis�o.
#include<stdio.h>
void main()
{
    int i;
    printf("Introduza um numero inteiro: ");
    scanf("%d",&i);

    if(i%2==0){
        printf("\n%d e um numero par\n",i);
    }
    else{
        printf("\n%d e um numero impar\n",i);
    }
}
