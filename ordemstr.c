#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct
{
    char nome[101];
}Ordem;
int cmp(const void* a,const void *b){
    Ordem *A = (Ordem*)a, *B = (Ordem*)b;
    return strcmp(A->nome,B->nome);
}
int main(){
    Ordem s[1001];
    int i=0,n,j;
       
    while(fgets(s[i].nome,101,stdin) != NULL ){
       for(j=0; s[i].nome[j] != '\n' && s[i].nome[j] != '\r' && s[i].nome[j] != '\0'; j++);
        s[i].nome[j] = '\0';
        
        i++;

    }
    
    qsort(s,i,sizeof(Ordem),cmp);
    for(n=0;n<i ; n++)
        printf("%s\n",s[n].nome);
    
    return 0;
}