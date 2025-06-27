#include <stdio.h>


int main(){

int soma,sub,mult,div,a,b;


printf("Digite o primeiro numero: ");
scanf("%d",&a);

printf("Digite o segundo numero: ");
scanf("%d",&b);

soma = a+b;
sub = a-b;
mult = a*b;
div = a/b;

printf("\nResultados: ");
printf("\nSoma:%d ",soma);
printf("\nSub:%d ",sub);
printf("\nMult:%d ",mult);
printf("\nDiv:%d \n",div);

}
