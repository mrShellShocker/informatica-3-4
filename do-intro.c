#include<stdio.h>

int main()
{
    int number;
    int counter = 0;

    printf("Enter a number with several digits: ");
    scanf("%d", &number);

    do {
        number = number / 10;
        ++counter;
    }
    while (number != 0);

    printf("Number of digits: %d\n", counter);
    
}
