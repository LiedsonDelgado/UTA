//Elabore um algoritmo que leia o valor do sal�rio m�nimo e o valor do sal�rio de
//uma pessoa. Calcular e imprimir quantos sal�rios m�nimos essa pessoa ganha.
#include<stdio.h>
void main()
{
float salariomin,salariopessoal,quantsalarios;

printf("qual e salario minimo:");
scanf("%f",&salariomin);

printf("qual e o seu salario:");
scanf("%f",&salariopessoal);

quantsalarios=salariomin/salariopessoal;

printf("a quantidade de salarios minimos ganhos e:%.f",quantsalarios);
}
