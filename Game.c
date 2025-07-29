#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return (rand() % 6) + 1; // Returns a number between 1 and 6
}

int main() {
    int player1Score = 0, player2Score = 0;
    int roll;

    // Initialize random seed
    srand(time(0));

    printf("Rolling the dice 5 times for each player...\n\n");

    for (int i = 1; i <= 5; i++) {
        roll = rollDice();
        player1Score += roll;
        printf("Player 1 roll %d: %d\n", i, roll);

        roll = rollDice();
        player2Score += roll;
        printf("Player 2 roll %d: %d\n", i, roll);

        printf("\n");
    }

    printf("Total score:\n");
    printf("Player 1: %d\n", player1Score);
    printf("Player 2: %d\n", player2Score);

    if (player1Score > player2Score) {
        printf("Player 1 wins!\n");
    } else if (player2Score > player1Score) {
        printf("Player 2 wins!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}
