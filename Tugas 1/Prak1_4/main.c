#include <stdio.h>
#include <stdlib.h>

// Nama                 : Chandra Wijayakusuma
// NIM                  : 24060122140106
// Nama Program         : Prak1_4 (uasKellLayang)
// Tanggal Pembuatan    : 2/26/2023

int main()
{
    float s1, s2, d1, d2, L, K;

    printf("Masukan sisi satu layang - layang = ");
    scanf("%f", &s1);

    printf("Masukan sisi dua layang - layang = ");
    scanf("%f", &s2);

    printf("Masukan diagonal satu layang - layang = ");
    scanf("%f", &d1);

    printf("Masukan diagonal dua layang - layang = ");
    scanf("%f", &d2);

    L = d1 * d2 / 2;
    K = 2 * (s1 + s2);

    printf("%f \n", L);
    printf("%f ", K);
    return 0;
}
