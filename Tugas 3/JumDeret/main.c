#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  int x;

  printf("Masukkan Integer : ");
  scanf("%d", &a);

  if (a <= 0){
    printf("Nilai tidak boleh negatif \n");
  }
  else{
    for (int i = 1; i <= a; i++) {
    x += i;
  }
  }
  printf("%d\n", x);
    return 0;
}
