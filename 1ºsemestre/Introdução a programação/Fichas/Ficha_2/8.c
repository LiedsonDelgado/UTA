//Escreva um programa que pe�a a quantidade de litros de combust�vel de um abastecimento e determine o pre�o a pagar.
//Considere que o combust�vel custa 160$00 por litro e que abastecimentos de mais de 40 litros t�m um desconto de 5%.
#include<stdio.h>
void main()
{
    float quant_litros,pagar,combustivel=160;
    printf("quantos litros de combustivel deseja: ");
    scanf("%f",&quant_litros);

    if(quant_litros<40){
        pagar=quant_litros*160;
        printf("\nO preco a pagar e de: %.3f\n",pagar);
    }
    else if(quant_litros>40){
        pagar=(quant_litros*160)*0.05;
        printf("\no total a pagar com um desconto de 5 porcento e de %.3f\n",pagar);
    }
}
