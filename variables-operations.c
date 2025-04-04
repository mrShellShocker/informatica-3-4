#include <stdio.h>


int main() {
//area
    int a  =  8;
    int b =  4;

    int area = (a * b);
    int perimeter = (a * 2) + (b * 2);

 //farenheit

    int fahrenheit = 40;
    int celsius = (fahrenheit-32)/1.8;

//hours to minutes

    int minutes = 349;
    int hours = minutes/60;
    int minutesLeft = minutes - hours * 60;
//area
    printf("Area:%d\n", area);
    printf("Perimeter:%d\n", perimeter);
 
//farenheit
    printf("%d°F = %d°C\n", fahrenheit, celsius);
//hours to minutes
    printf("%d minutes is equal to %d hours and %d minutes\n", minutes, hours, minutesLeft);
    return 0;
}