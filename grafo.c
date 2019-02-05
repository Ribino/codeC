#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void zerar_matriz(int ma[50][50],int tam){
    int j,i;  
      for(j=0;j<tam;j++){
        for(i=0;i<tam;i++)
            ma[i][j]=0;    
    } 
}

int main(){
    int ma[50][50];
    int n,m,x,y,i,j;

    zerar_matriz(ma,5);

    scanf("%d %d", &n, &m);
    
    for(i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        ma[x][y]=1;
        ma[y][x]=1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d  ",ma[i][j]);
        printf("\n");
    }


    return 0;
}
