#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        printf("%d ", 2 * i);
        sum += 2 * i;
    }

    printf("\nSum = %d\n", sum);
    return 0;
}
