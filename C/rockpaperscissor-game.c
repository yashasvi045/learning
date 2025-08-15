#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char choice = 'y';
char input() {
    printf("Want to play again? (y for yes/n for no): ");
    scanf(" %c", &choice);
    if (choice == 'n') {
        printf("Thanks for playing.\n");
    }
    else if (choice != 'y' && choice != 'n') {
        printf("Invalid input.\n");
    }
}

int main(void) {
    srand(time(0));
    int player_score = 0, pc_score = 0;
    while (choice == 'y') {
        int player, pc = rand() % 3;
        printf("Choose 0 for rock, 1 for paper, 2 for scissor:\n");
        scanf("%d", &player);
        char *output[] = {"Rock", "Paper", "Scissor"};
        if (player > 2 || player < 0)
        {
            printf("Invalid choice. \n");
            continue;
        }
        int out = pc - player;
        if (out == 1 || out == -2) {
            printf("%s beats %s. PC wins!\n", output[pc], output[player]);
            pc_score++;
        }
        else if (out == -1 || out == 2) {
            printf("%s beats %s. Player wins.\n", output[player], output[pc]);
            player_score++;
        }
        else {
            printf("No one wins. Try again.\n");
        }
        input();
    }
    printf("The score of player is %d and the score of pc is %d.\n", player_score, pc_score);
    return 0;
}
