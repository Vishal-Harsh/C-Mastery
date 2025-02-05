#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int i=n;
    do {
        if (i % 2 == 0) {
            sum += i;
        }
        i--;
    } while (i >= 1);
    printf("Sum: %d\n", sum);

    return 0;
}