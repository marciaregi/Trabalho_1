#define LIB_H

#include <stdlib.h>
#define TOTAL 5

typedef void* (*construtor_t)(void*);
typedef void (*desconstrutor_t)(void*);

typedef struct noLista
{
    void* data;                         //Dado á ser inserido na lista
    struct noLista* proximo;           // referência ao próximo nó na lista
} noLista;

typedef struct Lista
{
    int numElementos;                    //total de elementos da lista
    int elementos[TOTAL];                // um array de elementos total, com espaço para um total de elementos
    construtor_t construtor;        //Construtor constroi uma lista de um tipo generico
    desconstrutor_t desconstrutor; // Libera memoria
} unrolled_list_t;

void inicializar(unrolled_list_t** l, construtor_t construtor, desconstrutor_t desconstrutor); //Inicializa a minha lista com null e 0
noLista* lista_novo(void* data, construtor_t c); //cria um novo nó na lista
void unrolled_list_insert(unrolled_list_t* l,size_t i,void* data); //insere o dado data na i-ésima posição da lista
void unrolled_list_remove(unrolled_list_t* l,size_t i,void* data)/ //remove o dado contido na i-ésima posição da lista
void* unrolled_list_access(unrolled_list_t* l, size_t i); //retorna o dado contido na i-ésima posição da lista
#endif
