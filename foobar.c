typedef struct Result {
  int input;
  int output;
} Result;

Result foo (int n) {
  Result res = { n, n * 111};
  return res;
}

Result bazzy (int n) {
  Result res = { n, n * 10 };
  return res;
}

#export Result
#export foo
#export bazzy as bar
