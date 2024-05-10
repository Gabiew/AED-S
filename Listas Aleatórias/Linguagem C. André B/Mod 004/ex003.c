#include <stdio.h>
int main() {
  int x;
  scanf("%d", &x);
  if (x % 2 == 0) {
    printf("Ele é par");
  } else {
    printf("Ele é impar");
  }
  return 0;
}
