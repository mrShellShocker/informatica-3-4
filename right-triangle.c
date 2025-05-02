#include <stdio.h>

int main() {
    printf("How high do you want the triangle?\n");
    
    int height;
    scanf("%d", &height);
    
    for(int i = 1; i <= height; i++){
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}