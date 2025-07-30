#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return (rand() % 6) + 1; // Returns a number between 1 and 6
}

void waitForEnter(int player, int turn) {
    printf("Player %d, press Enter to roll dice for turn %d...", player, turn);
    while (getchar() != '\n'); // Wait for Enter key
}

int main() {
    int player1Score = 0, player2Score = 0;
    int roll;

    // Initialize random seed
    srand(time(0));

    printf("Rolling the dice 5 times for each player...\n\n");

    for (int i = 1; i <= 5; i++) {
        // Player 1's turn
        waitForEnter(1, i);
        roll = rollDice();
        printf("Player 1 rolled: %d\n", roll);
        player1Score += roll;

        // Clear buffer before next input
        getchar();

        // Player 2's turn
        waitForEnter(2, i);
        roll = rollDice();
        printf("Player 2 rolled: %d\n\n", roll);
        player2Score += roll;

        // Clear buffer again
        getchar();
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
