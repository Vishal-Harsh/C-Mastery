#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
 int i = n;
    while (i >= 1) {
        if (i % 2 != 0) {
            sum += i;
        }
        i--;
    }
    printf("Sum: %d\n", sum);}