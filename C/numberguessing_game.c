#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    char choice;
    srand(time(0));
    do {
        int randomNumber = (rand() % 100) + 1;
        int guesses = 0;
        int guessed;
        do {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if (guessed>randomNumber) {
            printf("Guess a bit lower.\n");
        }
        else {
            printf("Guess a bit higher.\n");
        }
        guesses++;
        } while (guessed!=randomNumber);
        printf("You guessed the number in %d guesses!\n", guesses);
        while (getchar() != '\n');
        printf("Want to play again? (y/n): ");
        scanf("%c", &choice);
    } while (choice == 'y');
    printf("Game over.\n");
    return 0;
}
