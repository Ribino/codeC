#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

int a,i,n,j;
unsigned long long vet[61];
    
    vet[0]=0;
    vet[1]=1;    
    for(i=2;i<61;i++)      
        vet[i]=vet[i-1]+vet[i-2];
    scanf("%d",&a);
    for(j=0; j< a; j++){
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n",n,vet[n]);
        
    }
    
     
        return 0;
    
}

while(vet[i] != '.' && vet[i+1] != '.')