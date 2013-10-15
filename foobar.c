#include "foobar.h"

static int mult(a, b) {
  return a * b;
}

FB_Result FB_foo (int n) {
  FB_Result res = { n, mult(n, 111) };
  return res;
}

FB_Result FB_bar (int n) {
  FB_Result res = { n, mult(n, 10) };
  return res;
}
