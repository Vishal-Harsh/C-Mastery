#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i = 2;
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");
}