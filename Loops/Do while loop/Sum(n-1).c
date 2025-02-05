#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int i=1;
    do {
        sum += i;
        i--;
    } while (i >= 1);
    printf("Sum: %d\n", sum);

    return 0;
}