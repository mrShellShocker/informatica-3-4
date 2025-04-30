#include <stdio.h>
int main (){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0) {
        printf("that year is leap, good job \n");
    }
    else{
        printf("this is not a leap year\n");
    }

    return 0;

}