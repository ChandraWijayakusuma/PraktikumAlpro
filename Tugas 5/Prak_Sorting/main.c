#include <stdio.h>
#include <stdlib.h>

#include "Fungsi.h"

int main()
{
    int p;
    printf("Masukan Panjang Array : ");
    scanf("%d",&p);

    int t[p];
    int i;

    printf("Masukan Arraynya :\n");
    for (i = 0 ; i < p ; i++){
        scanf("%d", &t[i]);
    }

    printf("Array yang belum terurut : ");
    for (i = 0 ; i < p ; i++){
        printf("%d ", t[i]);
    }

    char c;
    printf("Pilihlah metode sorting \nA. Bubble Sort \nB. Counting Sort\nC. Insertion Sort\nD. Selection Sort:\n");
    scanf(" %c", &c);
    switch(c){
    case 'A':
        bubbleSort(t,p);
    break;
    case 'B':
        countingSort(t,p);
    break;
    case 'C':
        insertionSort(t,p);
    break;
    case 'D':
        selectionSort(t,p);
    break;
    default:
        printf("Pilihan Menu Salah!");
    }

    printf("Array yang sudah terurut : ");
    for (i = 0 ; i < p ; i++){
        printf("%d ", t[i]);
    }
    return 0;
}
