#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int bilangan[10] = {7,4,5,7,6,5,3,5,1,4};
    int max;
    int max2;

    max2 = 0;
    max = bilangan[0];

    for (i = 1 ; i < 10 ; i ++){
        if (max < bilangan[i]){
            max2 = max;
            max = bilangan[i];
        }
        else if (bilangan[i] > max2 && bilangan[i] != max){
            max2 = bilangan[i];
        }
    }
    printf("%d", max2);

    return 0;
}
