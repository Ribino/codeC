#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define TRUE 1

int mmc(int num1, int num2) {

    int resto, a, b;

    a = num1;
    b = num2;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return ( num1 * num2) / a;
}

int main(){
 int a,b,x;

 scanf("%d %d",&a,&b);
 x =  mmc(a,b);
 printf("MMC EH%d\n",x);
    
return 0;
}