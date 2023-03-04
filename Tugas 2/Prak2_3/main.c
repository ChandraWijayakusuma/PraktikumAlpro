#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Masukan angka bulan = ");

    if(scanf("%d", &a)) {
        if (0 < a < 13){
            if (a == 1){
                printf("Januari");
            }
            if (a == 2){
                printf("Februari");
            }
            if (a == 3){
                printf("Maret");
            }
            if (a == 4){
                printf("April");
            }
            if (a == 5){
                printf("Mei");
            }
            if (a == 6){
                printf("Juni");
            }
            if (a == 7){
                printf("Juli");
            }
            if (a == 8){
                printf("Agustus");
            }
            if (a == 9){
                printf("September");
            }
            if (a == 10){
                printf("Oktober");
            }
            if (a == 11){
                printf("November");
            }
            if (a == 12){
                printf("Desember");
            }
        }
        else{
            printf("Masukan bulan salah!");
        }
    }
    return 0;
}
