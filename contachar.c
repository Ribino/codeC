#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int vindice[26];

typedef struct letras{
    char letra[27] ;
    int indice[26];
}Letras;

void busca_maior(Letras* abc);

/*void imprime (Letras* abc){
    int i;
    for (i=0;i<27;i++)
        printf("%d ---> %c\n", abc->indice[i],abc->letra[i]);
}
*/
int main(){
    int i,j,n,maior;
    char string[202];
    Letras abc;

    strcpy(abc.letra,"abcdefghijklmnopqrstuvwxyz");
    scanf("%d ",&n);
    for(i = 0; i < n; i++){
        memset(abc.indice,0,sizeof(abc.indice));
        fgets(string,202,stdin);
        for(j = 0; string[j] != '\n'; j++){
            if((string[j] >= 'A' && string[j] <= 'Z') || (string[j] >= 'a' && string[j] <= 'z')){
                // VOGAIS 
                if(string[j] == 'A' || (string[j] == 'a')){
                    abc.indice[0] += 1;
                    continue; 
                }
                if(string[j] == 'E' || string[j] == 'e'){
                    abc.indice[4] += 1;
                    continue;
                }
                if(string[j] == 'I' || string[j] == 'i'){
                    abc.indice[8] += 1;
                    continue;
                }
                if(string[j] == 'O' || string[j] == 'o'){
                    abc.indice[14] += 1;
                    continue;
                }
                if(string[j] == 'U' || string[j] == 'u'){
                    abc.indice[20] += 1;
                    continue;
                }
                // FIM VOGAIS
                if(string[j] == 'B' || string[j] == 'b'){
                    abc.indice[1] += 1;
                    continue;
                }
                if(string[j] == 'C' || string[j] == 'c'){
                    abc.indice[2] += 1;
                    continue;
                }
                if(string[j] == 'D' || string[j] == 'd'){
                    abc.indice[3] += 1;
                    continue;
                }
                if(string[j] == 'F' || string[j] == 'f'){
                    abc.indice[5] += 1;
                    continue;
                }
                if(string[j] == 'G' || string[j] == 'g'){
                    abc.indice[6] += 1;
                    continue;
                }
                if(string[j] == 'H' || string[j] == 'h'){
                    abc.indice[7] += 1;
                    continue;
                }
                if(string[j] == 'J' || string[j] == 'j'){
                    abc.indice[9] += 1;
                    continue;
                }
                if(string[j] == 'K' || string[j] == 'k'){
                    abc.indice[10] += 1;
                    continue;
                }
                if(string[j] == 'L' || string[j] == 'l'){
                    abc.indice[11] += 1;
                    continue;
                }
                if(string[j] == 'M' || string[j] == 'm'){
                    abc.indice[12] += 1;
                    continue;
                }
                if(string[j] == 'N' || string[j] == 'n'){
                    abc.indice[13] += 1;
                    continue;
                }
                if(string[j] == 'P' || string[j] == 'p'){
                    abc.indice[15] += 1;
                    continue;
                }
                if(string[j] == 'Q' || string[j] == 'q'){
                    abc.indice[16] += 1;
                    continue;
                }
                if(string[j] == 'R' || string[j] == 'r'){
                    abc.indice[17] += 1;
                    continue;
                }
                if(string[j] == 'S' || string[j] == 's'){
                    abc.indice[18] += 1;
                    continue;
                }
                if(string[j] == 'T' || string[j] == 't'){
                    abc.indice[19] += 1;
                    continue;
                }
                if(string[j] == 'V' || string[j] == 'v'){
                    abc.indice[21] += 1;
                    continue;
                }
                if(string[j] == 'W' || string[j] == 'w'){
                    abc.indice[22] += 1;
                    continue;
                }
                if(string[j] == 'X' || string[j] == 'x'){
                    abc.indice[23] += 1;
                    continue;
                }
                if(string[j] == 'Y' || string[j] == 'y'){
                    abc.indice[24] += 1;
                    continue;
                }
                if(string[j] == 'Z' || string[j] == 'z'){
                    abc.indice[25] += 1;
                    continue;
                }
            }
        }
        //imprime(&abc);
        busca_maior(&abc);
    }
   
return 0;
}

void busca_maior(Letras* abc){
    int maior = -1, i,cont = 0, ind;
    for(i=0;i<26;i++)
        if(abc->indice[i] > maior)
            maior = abc->indice[i];
            
        
   // printf("%d %d\n\n",maior,ind);
    //vindice[0] = ind;
    for(i=0;i<26;i++){
        if(maior == abc->indice[i]){
            vindice[cont] = i+1;
            //printf("\n( %d )\n", vindice[cont]);
            printf("%c",abc->letra[vindice[cont]-1]);
            cont++;
        }
    }
    printf("\n");
}
