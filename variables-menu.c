#include <stdio.h>

char snack1[] = "Chips";
char snack2[] = "Soda";
char snack3[] = "Candy";

float snack1Value = 1.50;
float snack2Value = 2.00;
float snack3Value = 0.75;

int snack1Stock = 20;
int snack2Stock = 15;
int snack3Stock = 30;

int main(){

    printf("Welcome to the Snack Shop\n");
    printf("---------------------------\n");
    printf("Item\t\tPrice\tQuantity\n");
    
    printf("%s\t\t%.2f\t%d\n", snack1, snack1Value, snack1Stock);
    printf("%s\t\t%.2f\t%d\n", snack2, snack2Value, snack2Stock);
    printf("%s\t\t%.2f\t%d\n", snack3, snack3Value, snack3Stock);

    return 0;
}