/*
  switch-case examples in C

  Jim Teresco
  The College of Saint Rose
  Programming Languages, CSC 433
  Fall 2012

*/

#include <stdio.h>

// a function that performs a sample switch statement
void do_switch(int val) {

  printf("(do_switch) executing with val=%d\n", val);

  switch (val) {

  case 1:
    // we can have a single statement before the break
    printf("(do_switch) A\n");
    break;
  case 2:
    // we can do multiple statements before the break
    printf("(do_switch) B\n");
    printf("(do_switch) C\n");
    break;
  case 3:
  case 4:
    // we can specify multiple cases
    printf("(do_switch) D\n");
    break;
  case 5:
    // we can allow a case to "fall through" to the next case
    printf("(do_switch) E\n");
  case 6:
    // so this happens for 5 or 6
    printf("(do_switch) F\n");
    break;
  default:
    // and the default case (which is optional).  If no default is 
    // given and no case matches, the switch will have no effect
    printf("(do_switch) G\n");
    break;  // this can be left out safely
  }
}

int main() {
  
  // try the above switch for several numbers
  for (int i=1; i<=7; i++) {
    do_switch(i);
  }

  // we can also do switches on char values, since they're really
  // just little integers in C
  for (char c='a'; c<'e'; c++) {

    printf("Processing c='%c'\n", c);

    switch (c) {
    case 'a':
      printf("It's 'a'.\n");
      break;
    case 'b':
      printf("It's 'b'.\n");
      break;
    case 'c':
      printf("It's 'c'.\n");
      break;
      // note the lack of a 'default' so nothing happens
      // for all other char values
    }

    printf("Done processing c='%c'\n", c);
  }

  return 0;
}
