#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iA,iB;
    char c;
    float h;
    int h2;

    printf("Masukan angka pertama = ");
    scanf("%d", &iA);

    printf("Masukan angka kedua = ");
    scanf("%d", &iB);

    printf("Masukkan tipe hitungan): ");
    scanf(" %c", &c);

    switch(c){
    case 'a':
        printf("%d", iA + iB);
    break;
    case 'b':
        printf("%d", iA - iB);
    break;
    case 'c':
        printf("%d", iA * iB);
    break;
    case 'd':
        h = iA/iB;
        printf("%f", h);
    break;
    case 'e':
        printf("%d", iA / iB);
    break;
    case 'f':
        printf("%d", iA % iB);
    break;
    default:
        printf("Pilihan menu salah");

    }
    return 0;
}
