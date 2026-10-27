#include <stdio.h>
int main() {
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle:5 ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle:6 ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}