#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int guess;
    printf("Do you wanna choose heads (1) or tails(2) ?: ");
    scanf("%d", &guess);

    if (guess != 1 && guess != 2){
        printf("Bruh its easy, 1 or 2\n");
    }

    srand(time(NULL));

    int coin = (rand() % 2) + 1;

    if (coin == 1 && coin == guess) { //heats//
        printf("Heads\n");
    }
    else if ( coin == 1 && coin == guess ){ //tails//
        printf("Tails\n");
    }  

}
    