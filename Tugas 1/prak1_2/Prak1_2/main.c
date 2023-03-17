#include <stdio.h>
#include <stdlib.h>

// Nama                 : Chandra Wijayakusuma
// NIM                  : 24060122140106
// Nama Program         : Prak1_2 (gayaSentr)
// Tanggal Pembuatan    : 2/26/2023

int main()
{
    float m,v,r,F;

    printf("Masukan Massa = ");
    scanf("%f", &m);

    printf("Masukan Kecepatan = ");
    scanf("%f", &v);

    printf("Masukan Jari - jari = ");
    scanf("%f", &r);

    F = m * ((v * v) / r);

    printf("%f \n", m);
    printf("%f \n", v);
    printf("%f \n", r);
    printf("%f", F);

    return 0;
}
