/*
Fatec Ipiranga - Estrutura de Dados - Tarde

Gabriel Gualberto de Oliveira

Exercicio 03 da Lista de Funções
*/
#include<stdio.h>
void maior(int a, int b){
	int * p,*q;
	p = &a;
	q = &b;
	printf("Maior numero: %d\n",*p > *q ? *p : *q);
}
int main(){
	int a,b;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite um numero: ");
	scanf("%d", &b);
	maior(a,b);
return 0;
}
