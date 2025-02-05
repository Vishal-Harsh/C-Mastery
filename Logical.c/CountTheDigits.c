#include <stdio.h>
int main()
{
    int n, rem, count = 0;
    printf("enter n value");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        count = count + 1;
        n = n / 10;
    }
    printf("count of digits in number: %d", count);
}
