#include <stdio.h>
#include <stdlib.h>

// Nama                 : Chandra Wijayakusuma
// NIM                  : 24060122140106
// Nama Program         : Prak1_3 (volBolaKerct)
// Tanggal Pembuatan    : 2/26/2023

int main()
{
    float Vb, Vk, r;
    const float PHI = 3.14;

    printf("Masukan Jari - jari = ");
    scanf("%f", &r);

    Vb = 4 * PHI * r * r * r / 3;
    Vk = Vb / 2;

    printf("%f \n", Vb);
    printf("%f ", Vk);


    return 0;
}
