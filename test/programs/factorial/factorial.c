#include <stdio.h>

int fact(int x) {
  int i, n;
  n = 1;
  for (i = 0; i < x; ++i) n *= 1+i; 
  return n;
}

int main(void) {
  int i;
  for(i = 1; i < 100; ++i) printf("fact %d = %d\n", i, fact(i));
}


