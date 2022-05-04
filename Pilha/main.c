#include<stdio.h>
#include "pilha.h"

int main(){
	Pilha* p1 = pilha_criar();

    pilha_empilhar(p1, 5);
    pilha_empilhar(p1, 10);
    pilha_imprimir(p1);

    int posicao;
    pilha_topo(p1, &posicao);
    printf("\n %i", posicao);

    int tam;

    tam = pilha_tamanho(p1);

    printf("\n %i", tam);

    return 0;
}
