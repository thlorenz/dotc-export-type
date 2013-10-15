typedef struct {
  int input;
  int output;
} FB_Result;

#define Result FB_Result

Result FB_foo (int n) {
  Result res = { n, n * 111};
  return res;
}

Result FB_bar (int n) {
  FB_Result res = { n, n * 10 };
  return res;
}

#undef Result
