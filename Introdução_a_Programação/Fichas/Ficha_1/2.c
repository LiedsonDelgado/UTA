//Programa que receba dois n�meros e ao final mostre a soma, subtra�ao, multiplica�ao e a divisao dos numeros lidos.
#include<stdio.h>
void main(){
float x,y;
int soma,subtracao,multiplicacao,divisao;
printf("digite dois numeros: ");
scanf("%f\n%f",&x,&y);
soma=x+y;
subtracao=x-y;
multiplicacao=x*y;
divisao=x/y;
printf("soma:%d \n",soma);
printf("subtracao:%d \n",subtracao);
printf("multiplicacao:%d \n",multiplicacao);
printf("divisao:%d \n",divisao);
}
