#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct lista { 
    int info;
    struct lista* prox;
     
}Lista;

Lista* inicializa(void){
    return NULL;
}
Lista* insere(Lista* l, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}
void imprime(Lista* l){
    Lista* p;
    for (p=l; p != NULL; p = p->prox)  
        printf("info = %d\n",p->info);
}
void libera (Lista* l)
{
    Lista* p = l;
    while (p != NULL) {
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}
Lista* retira (Lista* l, int v) {

    Lista* ant = NULL;
    Lista* p = l;
    while(p != NULL && p->info != v) {
        ant = p;
        p = p->prox;
    }
    if (p == NULL)  return l;
    if (ant == NULL) 
        l = p->prox;

    else
        ant->prox = p->prox;
    free(p);
    return l;
}
int main (void){
    Lista* l;

    l = inicializa();
    l = insere(l, 45);
    l = insere(l, 76);
    l = insere(l, 56);
    l = insere(l, 78);
    imprime(l);
    printf("\n");
    l = retira(l, 78);
    imprime(l);
    printf("\n");
    l = retira(l, 45);
    imprime(l);
    libera(l);
    return 0;

}