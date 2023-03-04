#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Masukan Bilangan : ");

    if (scanf ("%d", &i)){

    if (i == 0){
        printf("Bilangan nol");
    }
    else if (i > 0){
        printf("Bilangan bulat positif");
    }
    else {
        printf("Bilangan bulat negatif");
    }
    }
    else{
        printf("Bukan termasuk sebuah bilangan");
    }
    return 0;


}
