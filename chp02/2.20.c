#include<stdio.h>
void main(){
    int radius;
    printf("%s :", "Enter radius of circle");
    scanf("%d", &radius);
    printf("Diameter: %.2f\n", radius * 2.0);
    printf("Circumference: %.2f\n", 2 * 3.14159 * radius);
    printf("Area: %.2f\n", 2 * 3.14159 * (radius * radius));
    
}