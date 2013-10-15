#include "stdio.h"
#include "stdlib.h"

#include "./foobar.c"

int main(int argc, char **argv) {
  FB_Result f = FB_foo(atoi(argv[1])); FB_Result b = FB_bar(atoi(argv[2]));
  printf("%d\n", f.output + b.output);
  return 0;
}
