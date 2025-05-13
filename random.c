#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rollnum;
    int count = 0;

    printf("How many dices you wanna roll?: ");
    scanf("%d", &rollnum);

    srand(time(NULL));

    while (count < rollnum)
    {

    int diceRoll = (rand() % 6) + 1; // Generates a number between 1 and 6

    printf("You rolled a: %d\n", diceRoll);

    ++count;
    }
    
}