#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = n;
    while (i >= 1) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i--;
    }
    printf("\n");}