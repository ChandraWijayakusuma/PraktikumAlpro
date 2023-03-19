#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int i;


    printf("Masukan Integer : ");
    scanf("%d", &a);

    if(a <= 0){
        printf("Nilai tidak boleh nol atau negatif");
    }
    else{
        for (i = 1; i <= a; i++) {
            if (a % i == 0) {
            printf("%d ", i);
            }
        }
    }
    return 0;
}
