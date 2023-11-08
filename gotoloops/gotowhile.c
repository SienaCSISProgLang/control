/*
  A while loop with goto statements in C

  Jim Teresco
  The College of Saint Rose
  Programming Languages, CSC 433
  Fall 2012

*/

#include <stdio.h>

int main() {

  int x = 1;
  int y = 4;

  while (x < 25) {

    printf("Before label, x=%d\n", x);

  midway:
    printf("After label, x=%d\n", x);

    x *= 2;

  }

  printf("After while loop, x=%d\n", x);

  if (y > 1) {
    x = y;
    y--;
    goto midway;
  }

  return 0;
}
