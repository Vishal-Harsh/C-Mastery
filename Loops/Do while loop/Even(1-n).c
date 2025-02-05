#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("Even numbers using do-while loop:\n");
    int i = 2; 
    do {
        printf("%d ", i);
        i += 2;
    } while (i <= n);
    printf("\n");

    return 0;
}