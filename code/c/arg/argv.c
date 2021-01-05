#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  printf("Number of args passed: %d\n\n");
  
  for (int i = 0; i < argc; i++) {
    printf("%d %s\n", i, argv[i]);
  }

  if (argc != 4) {
    printf("incorrect useage need a b and c\n");
    exit(-1);
  }

  float a = atof(argv[1]);
  float b = atof(argv[2]);
  float c = atof(argv[3]);

  printf("a b c %e %e %e\n", a, b, c);

  return 0;
}
