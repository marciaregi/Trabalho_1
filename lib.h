#define LIB_H

#include <stdlib.h>
#define TOTAL 5

typedef void* (*construtor_t)(void*);
typedef void (*desconstrutor_t)(void*);

typedef struct noLista
{
    void* data;                         //Dado � ser inserido na lista
    struct noLista* proximo;           // refer�ncia ao pr�ximo n� na lista
} noLista;

typedef struct Lista
{
    int numElementos;                    //total de elementos da lista
    int elementos[TOTAL];                // um array de elementos total, com espa�o para um total de elementos
    construtor_t construtor;        //Construtor constroi uma lista de um tipo generico
    desconstrutor_t desconstrutor; // Libera memoria
} unrolled_list_t;

void inicializar(unrolled_list_t** l, construtor_t construtor, desconstrutor_t desconstrutor); //Inicializa a minha lista com null e 0
noLista* lista_novo(void* data, construtor_t c); //cria um novo n� na lista
void unrolled_list_insert(unrolled_list_t* l,size_t i,void* data); //insere o dado data na i-�sima posi��o da lista
void unrolled_list_remove(unrolled_list_t* l,size_t i,void* data)/ //remove o dado contido na i-�sima posi��o da lista
void* unrolled_list_access(unrolled_list_t* l, size_t i); //retorna o dado contido na i-�sima posi��o da lista
#endif
