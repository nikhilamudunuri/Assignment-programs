#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks out of 100:90 ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid mark\n");
    } else if (marks >= 90) {
        printf("Grade: O\n");
    } else if (marks >= 80) {
        printf("Grade: A+\n");
    } else if (marks >= 70) {
        printf("Grade: A\n");
    } else if (marks >= 60) {
        printf("Grade: B\n");
    } else if (marks >= 50) {
        printf("Grade: C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}