#include<stdio.h>

int add (int a, int b) {
  return a + b;
}

int sub (int a, int b) {
  return a - b;
}

int main() {
  int a = 1;
  int b = 2;
  int total;

  total = add(a, b);
  printf("%d + %d = %d\n", a, b, total);

  total = sub(b, a);
  printf("%d - %d = %d\n", b, a, total);
}
