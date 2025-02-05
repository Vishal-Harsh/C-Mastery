#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n); 
    int i = 2;

    do {
        sum += i;
        i += 2;
    } while (i <= n);
    printf("Sum: %d\n", sum);

    return 0;
}