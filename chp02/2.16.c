#include<stdio.h>

void main(){
    int a,b;
    printf("%s: ", "Enter two numbers");
    scanf("%d%d", &a, &b);
    printf("Sum: %d\nProduct: %d\nDifference: %d\nQuotient: %d\nRemainder: %d", a+b, a*b, a-b, a/b, a%b);

}