#include <stdio.h>

int main(){

    int a,b;
    int multiply;
    printf("Enter  a and b:");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    multiply=a*b;
    
    printf("The sum of %d and %d is: %d",a,b,sum);
    printf("\n");
    printf("The Multiplication of %d and %d is: %d",a,b,multiply);
}
