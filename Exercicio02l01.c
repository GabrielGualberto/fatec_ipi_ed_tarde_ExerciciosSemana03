/*
Fatec Ipiranga - Estrutura de Dados - Tarde

Gabriel Gualberto de Oliveira

Exercicio 02 da Lista de Vetores
*/
#include<stdio.h>
int maior (int a[]){
	int * p,*pA;
	int i, aux=0;
	p = a;
	pA = &aux;
	for(i=0;i<10;i++,p++){
		if (*p >= *pA)  *pA = *p;
	}
	return *pA;
}
int main(){
	int v[10]= {1,-3,5,6,37,4,20,8,9,15};
	printf("Maior: %d",maior(v));
return 0;
}
