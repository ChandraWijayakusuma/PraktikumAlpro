#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil, i, j, n, tot;
    printf("Jumlah isi tabel yang akan diinput : ");
    scanf("%d", &n);

    int *s = (int*)malloc(n * sizeof(int));
    printf("Masukan isi tabel :\n");

    tot = 0;
    for (i = 0 ; i < n ; i++){
        scanf("%d",&s[i]);
    }

    printf("Total nilai yang muncul lebih dari sekali adalah : ");

    for (j = 0 ; j < n ; j++){
        bil = 1;

        for (i = j + 1 ; i < n ; i++){
            if (s[j] == s[i]){
                bil += 1;
                if(bil > 1){
                    tot = tot + s[j];

                }
            }
        }
    }
    printf("%d", tot);
    return 0;
}

