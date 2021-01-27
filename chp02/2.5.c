// 2.5 Product of 3 integers

#include<stdio.h>

void main(){

    int x,y,z, result;

    printf("%s: ", "Please Enter 3 integers");
    scanf("%d%d%d", &x, &y, &z);
    result = x * y * z;
    printf("The product is: %d", result);

}