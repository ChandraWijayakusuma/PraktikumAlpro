#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
   int i, j, n, isPrima;

   printf("Masukkan integer: ");
   scanf("%d", &n);

   printf("Nilai prima dari 2 hingga %d adalah: ", n);


   for(i=3; i<=n; i++) {
      isPrima = 1;

      for(j=2; j<=i/2; j++) {
         if(i%j==0) {
            isPrima = 0;
         }
      }

      if(isPrima == 1) {
         printf("%d ", i);
      }
   }

   return 0;
}
