#define LIB_H

#include <stdlib.h>

typedef void* (*construtor_t)(void*);
typedef void (*desconstrutor_t)(void*);


typedef struct noLista
{
    int elementos;                //total de elementos da lista
    int array[total];            // um array de elementos total, com espa�o para um total de elementos
    struct noLista* proximo;    // refer�ncia ao pr�ximo n� na lista
} noLista;

void unrolled_list_insert(unrolled_list_t* l,size_t i,void* data); //insere o dado data na i-�sima posi��o da lista
void unrolled_list_remove(unrolled_list_t* l,size_t i,void* data)/ //remove o dado contido na i-�sima posi��o da lista
void* unrolled_list_access(unrolled_list_t* l, size_t i); //retorna o dadocontido nai-�sima posi��o da lista
#endif
