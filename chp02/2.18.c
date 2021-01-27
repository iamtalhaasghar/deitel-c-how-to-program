#include<stdio.h>

void main(){
    int a, b;
    printf("%s: ", "Enter two integers");
    scanf("%d%d", &a, &b);

    if(a > b){
        printf("%d is larger than %d\n", a, b);
    }

    if(b > a){
        printf("%d is larger than %d\n", b, a);
    }

    if(a == b){
        printf("%d is equal to %d\n", b, a);
    }
    

}