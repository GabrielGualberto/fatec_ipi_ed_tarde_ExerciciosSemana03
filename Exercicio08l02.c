/*
Fatec Ipiranga - Estrutura de Dados - Tarde

Gabriel Gualberto de Oliveira

Exercicio 08 da Lista de Funções
*/
#include<stdio.h>
void primo(int n){
    int divisivel=0, i;
    int *p,*q;
    p = &n;
    q = &divisivel;
    for(i=1; i <= *p; i++){
        if(*p%i==0) *q = *q + 1;
    }
    if(*q == 2) printf("O numero %d é primo \n",*p);
    else printf("O numero %d nao é primo\n", *p);
}
int main(){
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);
	primo(a);
return 0;
}
