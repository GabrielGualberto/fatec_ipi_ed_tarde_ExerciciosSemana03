/*
Fatec Ipiranga - Estrutura de Dados - Tarde

Gabriel Gualberto de Oliveira

Exercicio 07 da Lista de Funções
*/
#include<stdio.h>
int fatorial (int a){
	int * p;
	p = &a;
	if (*p <= 1) return *p;
	else return *p = *p * fatorial(*p-1);
	
}
int main(){
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Fatorial do numero digitado: %d\n",fatorial(a));
	
return 0;
}
