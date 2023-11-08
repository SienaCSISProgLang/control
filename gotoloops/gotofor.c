/*
  A for loop with goto statements in C

  Jim Teresco
  The College of Saint Rose
  Programming Languages, CSC 433
  Fall 2012, Fall 2014

*/

#include <stdio.h>

int main() {

  int x;
  int y = 4;

  for (x = 0; x < 5; x++) {

    printf("Before label, x=%d\n", x);

  midway:
    printf("After label, x=%d\n", x);

  }

  printf("After for loop, x=%d\n", x);

  if (y > 0) {
    x = y;
    y--;
    goto midway;
  }

  return 0;
}
