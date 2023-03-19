#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, sum;

    printf("Masukkan integer : ");
    scanf("%d", &n);

    printf("Bilangan sempurna dari 1 hingga %d adalah: ", n);

    for (i = 1; i <= n; i++) {
        sum = 0;

        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
