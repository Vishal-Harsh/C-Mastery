#include<stdio.h>
int main(){
    int n,rem,temp,rev=0;
    printf("Enter n value:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(temp==rev){
        printf("%d is a palindrome",temp);

    }
    else{
        printf("%d is not a palindrome",temp);
    }
}