#include<stdio.h>

int main() {
  int num1;
  int num2;
  int num3;

  printf(" -- Add Two Integers --\n");
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);

  num3 = num1 + num2;

  printf("Results are %d.\n", num3);


  float dec1;
  float dec2;
  float dec3;

  printf(" -- Add Two Decimals --\n");
  printf("Enter the first decimal: ");
  scanf("%f", &dec1);
  printf("Enter the second decimal: ");
  scanf("%f", &dec2);

  dec3 = dec1 + dec2;

  printf("Results are %f.\n", dec3);


  char first_name[20];
  char last_name[20];

  printf(" -- Enter Your Name --\n");
  printf("Enter your first name: ");
  scanf("%s", &first_name);
  printf("Enter your last name: ");
  scanf("%s", &last_name);
  
  printf("Hello, %s %s!\n", first_name, last_name);

  return 0;
}
