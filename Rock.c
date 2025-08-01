#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get computer's choice
int getComputerChoice() {
    return rand() % 3; // 0 = Rock, 1 = Paper, 2 = Scissors
}

// Function to display choice as text
const char* getChoiceName(int choice) {
    if (choice == 0) return "Rock";
    else if (choice == 1) return "Paper";
    else return "Scissors";
}

// Function to determine the winner
void determineWinner(int player, int computer) {
    if (player == computer) {
        printf("It's a tie!\n");
    } else if ((player == 0 && computer == 2) ||
               (player == 1 && computer == 0) ||
               (player == 2 && computer == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int playerChoice, computerChoice;

    // Seed the random number generator
    srand(time(0));

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice:\n");
    printf("0 = Rock\n1 = Paper\n2 = Scissors\n");
    printf("Your choice: ");
    scanf("%d", &playerChoice);

    // Validate input
    if (playerChoice < 0 || playerChoice > 2) {
        printf("Invalid input! Please enter 0, 1, or 2.\n");
        return 1;
    }

    computerChoice = getComputerChoice();

    printf("You chose: %s\n", getChoiceName(playerChoice));
    printf("Computer chose: %s\n", getChoiceName(computerChoice));

    determineWinner(playerChoice, computerChoice);

    return 0;
}
