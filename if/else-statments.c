#include <stdio.h>

int main(){

    int number1;
    int number2;

    printf("Enter number 1: ");
    scanf("%d", &number1);
    printf("Enter number 2: ");
    scanf("%d", &number2);

    if (number1 == number2) {
        printf("both numbers are equal\n");        
    }

    else if (number1 != number2) {
        printf("both numbers are not equal\n");
    }

//2
    int number3;
    printf("Enter another number: \n");
    scanf("%d", &number3);
    if (number3%2 == 0 ) {
        printf("your number is even\n");
    }
    else if (number3%2 != 0) {
        printf("your number is odd\n");
    }

//3

    int dayNumber;
    printf("Enter a number acording to the days of the week: ");
    scanf("%d", &dayNumber);
    if (dayNumber == 1) {
        printf("Your day is Sunday\n");
    }
   else if (dayNumber == 2) {
        printf("Your day is Monday\n");
    }
    else if (dayNumber == 3) {
        printf("Your day is Tuesday\n");
    }
    else if (dayNumber == 4) {
        printf("Your day is Wednesday\n");
    }
    else if (dayNumber == 5) {
        printf("Your day is Thursday\n");
    }
        else if (dayNumber == 6) {
        printf("Your day is Friday\n");
    }
    else if (dayNumber == 7) {
        printf("Your day is Saturday\n");
    }
    else {
        printf("Bruh\n");
    }

//4
    int mathN1;
    int mathN2;
    char operation;
    printf("Its time to do meth\nI mean math\npls enter a number: \n");
    scanf("%d", &mathN1);
    printf("Now enter another number: \n");
    scanf("%d", &mathN2);
    printf("Enter the symbol for the operation you want. \n+ for sum, - for rest, * for multiply or / for divide: \n");
    scanf(" %c", &operation);
    int sumation = mathN1 + mathN2;
    int restation = mathN1 - mathN2;
    int multiplication = mathN1 * mathN2;
    int dividation = mathN1 / mathN2;
    if (operation == '+' ){
        printf("your sum is = %d\n", sumation); 
    }
    else if (operation == '-' ){
        printf("your rest is = %d\n", restation); 
    }
    else if (operation == '*' ){
        printf("your multiplication is = %d\n", multiplication);
    }
    else if (operation == '/' ){
        printf("your multiplication is = %d\n", dividation);
    }
    else{
     printf("Bruhhhhhhh\n");
    }
    
    
    return(0);
}