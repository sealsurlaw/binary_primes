#include <stdio.h>
#include "primes.h"

int main(void) {
   for (int i = 0; i < PRIMES_SIZE; ++i) {
      printf("%4d: ", i);
      for (int j = ((int) 4*sizeof(int) - 1); j >= 0; --j) {
	 char curr = ((primes[i]) >> j) & 1;
	 if (curr == 1) printf(YELLOW);
	 else           printf(RED);
	 printf("%1d", (int) curr);
      }
      printf(NORMAL);
      printf(" - %d\n", primes[i]);
      if (i >= 1000) break;
   }

   return 0;
}
