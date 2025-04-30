#include <stdio.h>

int main() {
    printf("Enter a number for the multuplication chart: ");
    int n;
    scanf("%d", &n);
    
    for(int row = 1; row < 6; row++){
        for (int col = 1; col < 6; col++)
        {
            int mul = row + col;
            printf("%d\t", mul);
        }

        printf("\n");
        
    }

}