#include <stdio.h>


int main() {
//area
    int length;
    int width;

 //farenheit

    int fahrenheit;

//hours to minutes

    int minutes;

//cicle

    int radio;

//area
    printf("Enter the lenght of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    int area = (length * width);
    int perimeter = (length * 2) + (width * 2);
    printf("Perimeter = %d\n", perimeter);
    printf("Area = %d\n", area);
 
//farenheit

    printf("Enter temperature in farenheit: ");
    scanf("%d", &fahrenheit);
    float celsius = (fahrenheit-32)/1.8;
    printf("%d°F = %.2f°C\n", fahrenheit, celsius);

//hours to minutes

    printf("Enter minutes: ");
    scanf("%d", &minutes);
    int hours = minutes/60;
    int minutesLeft = minutes - hours * 60;
    printf("%d minutes is equal to %d hours and %d minutes\n", minutes, hours, minutesLeft);

//circle

    printf("Enter the radio of the circle: ");
    scanf("%d", &radio);
    float circleArea = (radio * radio) * 3.14;
    printf("The area of the circle is = %.2f\n", circleArea);
    return 0;
}