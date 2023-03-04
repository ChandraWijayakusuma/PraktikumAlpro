#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int a;
    int b;
    int c;

    //Algoritma
    printf("Masukan sisi 1 = ");
    scanf("%d", &a);

    printf("Masukan sisi 2 = ");
    scanf("%d", &b);

    printf("Masukan sisi 3 = ");
    scanf("%d", &c);

    if (a <= 0 || b <= 0 || c <= 0){
        printf("Terdapat nilai yang bukan segitiga");
    }

    if (a == b && b == c && c == a){
        printf("Segitiga Sama Sisi");
    }
    else if (a == b || b == c || c == a){
        printf("Segitiga Sama Kaki");
    }
    else{
        printf("Segitiga Sembarang");
    }
    return 0;
}
