#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int guess;
    printf("Do you wanna choose heads (1) or tails(2) ?: ");
    scanf("%d", &guess);

    if (guess != 1 && guess != 2){
        printf("Bruh its easy, 1 or 2\nbueno pues try again\n");
        return 0;
    }

    srand(time(NULL));

    int coin = (rand() % 2) + 1;

    if (coin == 1 && coin == guess) { //heats//
        printf("Congrats you got it, it was heads\n");
    }
    else if ( coin == 2 && coin == guess ){ //tails//
        printf("Congrats you got it, it was tails\n");
    }
    else if (coin == 1 && coin != guess){ //wrong heats//
        printf("Yyyy too bad it was heads\n");
    }
    else if (coin == 2 && coin != guess){//wrong tails//
        printf("Yyyy too bad it was tails\n");
    }
 return 0;
}
    