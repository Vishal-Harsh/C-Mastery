#include<stdio.h>
int main(){
    int n,fact=1,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of the number is:%d",fact);
}