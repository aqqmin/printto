#include <stdio.h>

int main(int argc, char *argv[]) {


if( argc == 2 ) {
      for (int i = 0; i < argv[1] ; i++)
	printf("look! a(n) %d\n", i);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
   return 0;
}
