#include <stdio.h>

int main() {
    int age;
    printf("Enter the age of the person: 18");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Eligible to vote\n");
    } else {
        printf("Not eligible to vote\n");
    }

    return 0;
}