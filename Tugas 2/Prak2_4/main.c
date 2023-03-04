#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int a;
    int b;
    int c;
    int tot;

    //Algoritma
    printf("Masukan Tahanan 1 = ");
    scanf("%d", &a);

    printf("Masukan Tahanan 2 = ");
    scanf("%d", &b);

    printf("Masukan Tahanan 3 = ");
    scanf("%d", &c);

    tot = a + b + c;

    printf("%d", tot);
    return 0;
}
