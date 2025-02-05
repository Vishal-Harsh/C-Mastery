#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=n;
    do {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i--;
    } while (i >= 1);
    printf("\n");

    return 0;
}