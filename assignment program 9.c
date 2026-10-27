#include <stdio.h>

int main() {
    char ch;

    // Read a character from the user[span_6](start_span)[span_6](end_span)
    printf("Enter a character:user5 ");
    scanf(" %c", &ch);

    // Check if the character is a vowel (checking both lowercase and uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("'%c' is a vowel.\n", ch);
    } else {
        printf("'%c' is not a vowel.\n", ch);
    }

    return 0;
}