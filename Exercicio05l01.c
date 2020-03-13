/*
Fatec Ipiranga - Estrutura de Dados - Tarde

Gabriel Gualberto de Oliveira

Exercicio 05 da Lista de Vetores
*/
#include<stdio.h>
float media (int a[]){
	int * p;
	int i;
	float *q,cont=0;
	p = a;
	q = &cont;
	for(i = 0; i<30; i++){
		*q+= *p;
		p++;
	}
	*q = *q/30;

	
}
int main(){
	int v[30]= {10,10,5,6,7,4,10,8,9,10,10,10,5,6,7,4,10,8,9,10,10,10,5,6,7,4,10,8,9,10};
	printf("Media: %.2f",media(v));
return 0;
}
