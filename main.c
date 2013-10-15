#include "stdio.h"
#include "stdlib.h"

#require "./foobar.c" as FB

int main(int argc, char **argv) {
    FB.Result f = FB.foo(atoi(argv[1]));
    FB.Result b = FB.bar(atoi(argv[2]));
    printf("%d\n", f.output + b.output);
    return 0;
}
