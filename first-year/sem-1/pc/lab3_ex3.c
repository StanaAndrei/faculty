#include <stdio.h>

void printHorizontalLine(int n) {
  for (int i = 0; i < n; i++) {
    printf("*");
  }
  puts("");
}

int main(void) {
  int n;
  printf("n="); scanf("%d", &n);
  printHorizontalLine(n);
  for (int i = 0; i < n - 2; i++) {
    printf("*");
    for (int j = 0; j < n - 2; j++) {
      printf(" ");
    }
    puts("*");
  }
  printHorizontalLine(n);
  return 0;
}
