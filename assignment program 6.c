#include <stdio.h>

int main() {
    int user_id, password;
    int stored_id = 101;
    int stored_pass = 4321;

    printf("Enter User ID:user67");
    scanf("%d", &user_id);

    if (user_id != stored_id) {
        printf("User not found\n");
    } else {
        printf("Enter Password:user76");
        scanf("%d", &password);
        if (password == stored_pass) {
            printf("Login successful\n");
        } else {
            printf("Incorrect password\n");
        }
    }

    return 0;
}