#include <stdio.h>

int main() {
    int T[100][100];
    int bar, kol, i, j;
    int barSum, kolSum;


    printf("Masukkan jumlah baris: ");
    scanf("%d", &bar);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &kol);

    printf("Masukkan nilai elemen:\n");
    for (i = 0; i < bar; i++) {
        for (j = 0; j < kol; j++) {
            scanf("%d", &T[i][j]);
        }
    }


    printf("Jumlah pada baris:\n");
    for (i = 0; i < bar; i++) {
        barSum = 0;
        for (j = 0; j < kol; j++) {
            barSum += T[i][j];
        }
        printf("%d ", barSum);
    }


    printf("\nJumlah pada kolom:\n");
    for (i = 0; i < kol; i++) {
        kolSum = 0;
        for (j = 0; j < bar; j++) {
            kolSum += T[j][i];
        }
        printf("%d ", kolSum);
    }

    return 0;
}
