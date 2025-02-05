#include<stdio.h>
int main(){
    int n, rem, sum = 0;
    printf("Enter n value:");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("Sum of digits in number: %d", sum);
}
 

 