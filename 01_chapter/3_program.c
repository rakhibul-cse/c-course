#include <stdio.h>

int main(){
    int length, width, area;
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);
    area = length * width;
    printf("Area of rectangle is = %d", area);

    return 0;
}