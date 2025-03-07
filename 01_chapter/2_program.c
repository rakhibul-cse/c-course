#include <stdio.h>

int main(){
    // Area of square
    float side, area;
    printf("Enter side: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of square is = %f", area);
    return 0;
}