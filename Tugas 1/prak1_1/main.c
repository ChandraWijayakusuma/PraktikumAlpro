#include <stdio.h>
#include <stdlib.h>

// Nama                 : Chandra Wijayakusuma
// NIM                  : 24060122140106
// Nama Program         : Prak1_1 (jarakPBola)
// Tanggal Pembuatan    : 2/26/2023
int main()
{
    float v0,t,g,y;

    printf("Masukan Kecepatan Awal = ");
    scanf("%f", &v0);

    printf("Masukan Waktu = ");
    scanf("%f", &t);

    printf("Masukan Konstansta Gratifikasi = ");
    scanf("%f", &g);

    y = v0 * t - 1/2 * (g * (t * t));

    printf("%f \n", v0);
    printf("%f \n", t);
    printf("%f \n", g);
    printf("%f", y);
    return 0;
}
