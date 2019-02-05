#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct triangulo {
    float a, b ,c;
};
int ordenacao(struct triangulo *lado){
    float aux;
    if(lado->a > lado->b && lado->a > lado->c)
        return 0;    
    if(lado->b > lado->a && lado->b > lado->c){
        aux = lado->b;
        lado->b = lado->a;
        lado->a = aux;
    }
    else{
        aux = lado->c;
        lado->c = lado->a;
        lado->a = aux;
    } 
}
int main(){
    struct triangulo lado;

    scanf("%f %f %f", &lado.a, &lado.b, &lado.c);
    ordenacao(&lado);
    
    if(lado.a >= lado.b + lado.c){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    lado.a *= lado.a;
    lado.b *= lado.b;
    lado.c *= lado.c;
    
        if(lado.a == (lado.b + lado.c))
            printf("TRIANGULO RETANGULO\n");
        else if(lado.a > (lado.b + lado.c))
                printf("TRIANGULO OBTUSANGULO\n");
            else if(lado.a < (lado.b + lado.c))
                printf("TRIANGULO ACUTANGULO\n");
        if(lado.a == lado.b && lado.b == lado.c)
            printf("TRIANGULO EQUILATERO\n");
        else if(lado.a == lado.b || lado.a == lado.c || lado.b == lado.c)
            printf("TRIANGULO ISOSCELES\n");
                    
return 0;
}