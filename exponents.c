#include<stdio.h>
#include<math.h>    

int main (){
    int num;
    int exp;
    int count = 1;


    printf("Enter a number:");
    scanf("%d", &num);

    printf("Enter the exponent: ");
    scanf("%d", &exp);

    int option;

    printf("Do you wanna use el while and go wild (1) or use power to get the pawa (2): ");
    scanf("%d", &option);

    long long int ans = num;   
  
    if (option = 1){
        while(count < exp){
        ans = ans * num;
        ++count;
        }
    }
    else if (option = 2){
        ans = pow(num, exp);
    }
    else{
        printf("try again bruh.");
    }
    
    printf("%d ^ %d = %lli\n", num, exp, ans);


}