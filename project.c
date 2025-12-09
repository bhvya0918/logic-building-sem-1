#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    number = rand() % 100 + 1;

    printf("Guess the number (between 1 and 100): ");

    while (1) {
        scanf("%d", &guess);

        if (guess == number) {
            printf("Correct! You guessed the number.\n");
            break;
        } 
        else if (guess > number) {
            printf("Too high! Try again: ");
        } 
        else {
            printf("Too low! Try again: ");
        }
    }

    return 0;
}
