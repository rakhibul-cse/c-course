#include <stdio.h>

int main(){
    // add two numbers
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int sum = a + b;
    printf("Sum: %d", sum);

    return 0;
}