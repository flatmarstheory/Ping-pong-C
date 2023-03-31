// A ping pong in C, human against computer
// CLI will act like a GUI

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 100

int main(void)
{
    char *input = malloc(MAX);
    char *output = malloc(MAX);
    char *temp = malloc(MAX);
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    int o = 0;
    int p = 0;
    int q = 0;
    int r = 0;
    int s = 0;

    printf("Welcome to Ping Pong!\n");
    printf("You will be playing against the computer.\n");
    printf("The computer will randomly choose a number between 1 and 10.\n");
    printf("You will then have to enter a number between 1 and 10.\n");
    printf("If you enter the same number as the computer, you win!\n");
    printf("If you enter a different number, you lose!\n");
    printf("Let's begin!\n");

    while (1)
    {
        // Generate random number
        srand(time(NULL));
        int random = rand() % 10 + 1;

        // Get user input
        printf("Enter a number between 1 and 10: ");
        fgets(input, MAX, stdin);

        // Convert input to int
        int input_int = atoi(input);

        // Check if input is valid
        if (input_int < 1 || input_int > 10)
        {
            printf("Invalid input. Please try again.\n");
            continue;
        }

        // Check if input is equal to random
        if (input_int == random)
        {
            printf("You win!\n");
            break;
        }
        else
        {
            printf("You lose!\n");
            break;
        }
    }

    free(input);
    free(output);
    free(temp);
}