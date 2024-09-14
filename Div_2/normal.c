#include <stdio.h>

int main(){
    int n,fact=1,sum=0;
    printf("Enter the value of Rashmita! ");
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    for(int i=1;i<=n;i++){
        if(n%i == 0)
        sum+=i;
    }
    printf("The factorial of the number is:- %d",fact);
    printf("The sum of the divisors is %d",sum);
}