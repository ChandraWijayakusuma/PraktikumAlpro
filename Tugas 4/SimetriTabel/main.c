#include <stdio.h>

int main() {
    int T1[100], T2[100];
    int size1, size2, i, j;
    int sime = 1;


    printf("Masukkan ukuran Tabel_1: ");
    scanf("%d", &size1);
    printf("Masukkan elemen Tabel_1: \n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &T1[i]);
    }

    printf("Masukkan ukuran Tabel_2: ");
    scanf("%d", &size2);
    printf("Masukkan elemen Tabel_2: \n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &T2[i]);
    }

    if (size1 != size2) {
        sime = 0;
    }
    else {
        for (i = 0; i < size1; i++) {
            if (T1[i] != T2[i]) {
                sime = 0;

            }
        }
    }


    if (sime) {
        printf("T1 dan T2 simetri.\n");
    }
    else {
        printf("T1 dan T2 tidak simetri.\n");
    }

    return 0;
}
