#include "pilha.h"

#define TAM_INICIAL 5

/**************************************
* DADOS
**************************************/
struct pilha {
	TipoElemento* vetor;
	int tamVetor;
	int qtdeElementos;
};

/**************************************
* IMPLEMENTAÇÃO
**************************************/
// Desenvolva as funções
Pilha* pilha_criar()
{
    Pilha* p;

    p = (Pilha*)malloc(sizeof(Pilha));
    p->vetor = (int*)malloc(TAM_INICIAL*sizeof(int));
    p->tamVetor = TAM_INICIAL;
    p->qtdeElementos = 0;

    return p;
}
void pilha_destruir(Pilha** endereco)
{
    Pilha* p = *endereco;
    free(p);
    endereco = NULL;
}
bool pilha_empilhar(Pilha* p, TipoElemento elemento)
{
    if(p == NULL)
    {
        return 0;
    }

    p->vetor[p->qtdeElementos] = elemento;
    p->qtdeElementos++;
    return true;
}
bool pilha_desempilhar(Pilha* p, TipoElemento* saida); 
bool pilha_topo(Pilha* p, TipoElemento* saida){
    *saida = p->vetor[p->qtdeElementos - 1];

    return true;
}
bool pilha_vazia(Pilha* p);
void pilha_imprimir(Pilha* p)
{
    for (int i=0; i < p->qtdeElementos; i++)
    {
        printf("%i\n", p->vetor[i]);
    }
}
int pilha_tamanho(Pilha* p)
{
    return p->qtdeElementos;
}
Pilha* pilha_clone(Pilha* p);
void pilha_inverter(Pilha* p);
bool pilha_empilharTodos(Pilha* p, TipoElemento* vetor, int tamVetor);
bool pilha_toString(Pilha* f, char* str);
