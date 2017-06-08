void inicializar(unrolled_list_t** l, construtor_t construtor, desconstrutor_t desconstrutor)
{

    (*l) = malloc(sizeof (unrolled_list_t));
    (*l)->numElementos = NULL;
    (*l)->elementos = 0;
    (*l)->construtor = construtor;
    (*l)->desconstrutor = desconstrutor;
}
noLista* lista_novo(void* data, construtor_t c)
{

    noLista* novo_no;
    novo_no = malloc(sizeof(noLista));
    novo_no->dado = c(dado);
    novo_no->proximo = NULL;
    return novo_no;
}
void unrolled_list_insert(unrolled_list_t* l,size_t i,void* data)
{
    //Se a lista estiver vazia cria um novo no e adiciona na posição 0 do vetor
    if(l->numElementos == NULL)
    {
        noLista* novo_no = lista_novo(data, l->construtor);
        l->elementos[0] = data;
        l->elementos++;
    }
    if(l->numElementos+1 < elementos)
    {
        noLista* novo_no = lista_novo(data, l->construtor);
        l->elementos[l->numElementos] = data;
        l->numElementos++;
    }
    else
    {
        noLista* novo_no = lista_novo(data, l->construtor);
        int j = 0;
        for(i = 0; l->numElementos / 2 + 1; i < l->numElementos; i++)
        {
            l->numElementos[j++] = l->elementos[i];
            l->elementos[j++] = data;
            l->numElementos = l->numElementos/2 + 1;
            novo_no->proximo = l;
        }
    }
}

