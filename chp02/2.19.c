#include<stdio.h>

void main(){
    int a, b, c;
    printf("%s :", "Enter three numbers");
    scanf("%d%d%d", &a, &b, &c);
    int sum = a + b + c;
    int average = sum / 3;
    int product = a * b * c;

    // logic to find smallest number
    int smallest = a;
    if(a < b){
        if(a < c){
            smallest = a;
        }
    }

    if(b < a){
        if(b < c){
            smallest = b;
        }
    }

    if(c < b){
        if(c < a){
            smallest = c;
        }
    }

    // logic to find largest number
    int largest = a;
    if(a > b){
        if( a > c){
            largest = a;
        }
    }

    if(b > a){
        if(b > c){
            largest = b;
        }
    }

    if(c > b){
        if(c > a){
            largest = c;
        }
    }
    
    // printing output

    printf("Sum : %d\n", sum);
    printf("Average: %d\n", average);
    printf("Product : %d\n", product);
    printf("Smallest : %d\n", smallest);
    printf("Largest: %d\n", largest);

}