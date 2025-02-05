#include<stdio.h>
int main(){
    int n, rem, prod = 1;
    printf("enter n value");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        prod = prod * rem;
        n = n / 10;
    }
    printf("prod of digits in number: %d", prod);
}
 

 

