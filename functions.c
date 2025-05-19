#include<stdio.h>
float caulateAge(int age, float orbit);

int main (){
    const float MERCURY = 0.2408467;const float VENUS = 0.61519726;const float EARTH = 1.0;const float MARS = 1.8808158;const float JUPITER = 11.862615;const float SATURN = 29.447498;const float URANUS = 84.016846;const float NEPTUNE = 164.79132;

    int userAge;
    printf("Enter your age: ");
    scanf("%d", &userAge);

    int planet;
    printf("Enter the planet you want to calculate your age on:\n"); printf("1. Mercury\n"); printf("2. Venus\n"); printf("3. Earth\n"); printf("4. Mars\n"); printf("5. Jupiter\n"); printf("6. Saturn\n"); printf("7. Uranus\n"); printf("8. Neptune\n"); printf("Enter your choice (1-8): ");
    scanf("%d", &planet);

    if (planet < 1 || planet > 8) {
        printf("Invalid choice. Please enter a number between 1 and 8.\n");
        return 1;
    }
    if (userAge < 0) {
        printf("Invalid age. Please enter a positive number.\n");
        return 1;
    }

    if(planet == 1){
        caulateAge(userAge, MERCURY);
    } else if(planet == 2){
        caulateAge(userAge, VENUS);
    } else if(planet == 3){
        caulateAge(userAge, EARTH);
    } else if(planet == 4){
        caulateAge(userAge, MARS);
    } else if(planet == 5){
        caulateAge(userAge, JUPITER);
    } else if(planet == 6){
        caulateAge(userAge, SATURN);
    } else if(planet == 7){
        caulateAge(userAge, URANUS);
    } else if(planet == 8){
        caulateAge(userAge, NEPTUNE);
    }
}

float caulateAge(int age, float orbit){
    float result;
    result = age/orbit;
    printf("Your age would be %.2f\n", result);
}