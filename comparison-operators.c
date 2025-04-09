# include <stdio.h>

int main(){
    int a = 5;
    int b = a;
    int c = a + b;

    printf("%d == %d is %d\n", a, b, a==b);
}