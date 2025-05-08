#include<stdio.h>

int main (){
    int num;
    int exp;
    int count = 1;

    printf("Enter a number:");
    scanf("%d", &num);

    printf("Enter the exponent: ");
    scanf("%d", &exp);

    long long int ans = num;   
     
    while(count < exp){
        ans = ans * num;
        ++count;
    }
    printf("%d ^ %d = %lli\n", num, exp, ans);


}