//Lucas resolveu organizar um churrasco para comemorar o seu anivers�rio.
//A estimativa � que cada pessoa consuma 350 gramas de carne e 5 latas de cerveja.
//Pelas pesquisas que ele fez no supermercado de seu bairro, o quilo de carne custar� 400$ e cada cerveja sair� por 120$.
//Elabore um algoritmo que receba como entrada a quantidade de pessoas que ir�o para o churrasco e mostra o valor total que ele
//gastar� com carne e cerveja.
#include<stdio.h>
void main()
{
float npessoas,carne,cerveja,total;

printf("\nquantas pessoas virao para o churrasco: ");
scanf("%f",&npessoas);
carne=npessoas*400;
printf("\no valor gastado com carne e:%.0f\n",carne);
cerveja=npessoas*120;
printf("\no valor gastado com cerveja e:%.0f\n",cerveja);

total=carne+cerveja;
printf("\nLucas gastou um total de:%.0f\n",total);
}
