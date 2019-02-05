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
    int i=0, c, cont, flag, n, j, m;
    char mark[5] = "mark", MARK[5] = "MARK";
       
    while(fgets(s[i].nome,101,stdin) != NULL ){
       for(j=0; s[i].nome[j] != '\n' && s[i].nome[j] != '\r' && s[i].nome[j] != '\0'; j++);
        s[i].nome[j] = '\0';
        // i++;
        m = 0;
        for(c=0; s[i].nome[c] != '\0';c++){
            cont = 0;
            flag = 0;
            for(j=c; mark[cont] != '\0'; j++){
                if(s[i].nome[j] == mark[cont] || s[i].nome[j] == MARK[cont])
                    flag++;
                cont++;
            } 
            if(flag == 4){
                m++; 
                break;
            }
        }
        if(m == 0)
            i++;
    }
    qsort(s,i,sizeof(Ordem),cmp);
    for(n=0;n<i ; n++)
        printf("%s\n",s[n].nome);
    
    return 0;
}