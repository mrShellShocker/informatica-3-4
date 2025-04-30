#include <stdio.h>

int main() {

    int i;
    int n;
    int sum = 0 ;
    int factoral;
    int times;

    printf("enter a positive number pls: ");
    scanf("%d", &n);

    for (i = 1; i < n + 1; ++i){
        sum = sum  + i ;
    }

    printf("%d \n", sum);

}