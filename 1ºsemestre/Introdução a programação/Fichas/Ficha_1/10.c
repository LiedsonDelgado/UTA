//A classifca��o final dos alunos de Programa��o II � a m�dia aritm�tica de tr�s testes, arredondada a zero casa decimais.
//Elabore um algoritmo que calcule e imprima a classifica��o final de um aluno.
#include<stdio.h>
void main()
{
float nota1,nota2,nota3,media;

printf("qual a nota do primeiro teste:");
scanf("%f",&nota1);

printf("qual a nota do segundo teste:");
scanf("%f",&nota2);

printf("qual a nota do terceiro teste:");
scanf("%f",&nota3);

media=(nota1+nota2+nota3)/3;
printf("a classificacao final do aluno e de:%.0f",media);
}
