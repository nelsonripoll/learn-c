#include<stdio.h>

int main() {
  int x,y,z = 0;

  printf(" -- For Loop -- \n");
  for (x = 0; x < 10; x++) {
    printf("%d\n", x);
  }

  printf(" -- While Loop -- \n");
  while (y < 10) {
    printf("%d\n", y);
    y++;
  }

  printf(" -- Do-While Loop -- \n");
  do {
    printf("%d\n", z);
    z++;
  } while (z < 10);

  return 0;
}
