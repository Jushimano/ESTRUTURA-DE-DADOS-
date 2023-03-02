#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct Lista TPilha;

TPilha* cria_pilha();
/*Cria uma pilha vazia*/

int Vazia(TPilha* pilha);
/*Uma função booleana que verifica se a pilha está vazia ou não. Retorna 1 se a pilha está vazia, caso contrário 0*/

int empilha(TPilha* pilha, char x);
/*Insere o elemento x no topo da pilha*/

int desempilha(TPilha* pilha, char x);
/*Retorna o item x no topo da pilha, retirando-o da pilha*/

int tamanho(TPilha* pilha);
/*Retorna quantidade de elemento da pilha*/

#endif
