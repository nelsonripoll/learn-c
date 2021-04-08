#include<stdio.h>

int main() {
  int i;
  int arr[5] = {10, 20, 30, 40, 50};

  for (int i = 0; i < 5; i++) {
    printf("Value of arr[%d] is %d\n", i, arr[i]);
  }

  printf("Reassign arr[0]: ");
  scanf("%d", &arr[0]);

  printf("New value of arr[0] is %d.\n\n", arr[0]);



  int multiArr[2][3] = {{1,2,3}, {4,5,6}};

  for (int x = 0; x < 2; x++) {
    for (int y = 0; y < 3; y++) {
      printf("Value of multiArr[%d][%d] is %d\n", x, y, multiArr[x][y]);
    }
  }

  printf("Reassign multiArr[0][2]: ");
  scanf("%d", &multiArr[0][2]);

  printf("New value of multiArr[0][2] is %d.\n\n", multiArr[0][2]);


  char c1[]  = "string";
  printf("Value of c1[] is %s\n", c1);
  for (int i = 0; i < 7; i++) {
    if (c1[i] == '\0') {
      printf("Value of c1[%d] is a null character\n", i, c1[i]);
    } else {
      printf("Value of c1[%d] is '%c'\n", i, c1[i]);
    }
  }

  char c2[7] = "string";
  printf("Value of c2[] is %s\n", c2);
  for (int i = 0; i < 7; i++) {
    if (c2[i] == '\0') {
      printf("Value of c2[%d] is a null character\n", i, c2[i]);
    } else {
      printf("Value of c2[%d] is '%c'\n", i, c2[i]);
    }
  }

  char c3[7] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};
  printf("Value of c3[] is %s\n", c3);
  for (int i = 0; i < 7; i++) {
    if (c3[i] == '\0') {
      printf("Value of c3[%d] is a null character\n", i, c3[i]);
    } else {
      printf("Value of c3[%d] is '%c'\n", i, c3[i]);
    }
  }

  return 0;
}
