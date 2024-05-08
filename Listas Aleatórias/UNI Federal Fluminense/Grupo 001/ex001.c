#include <stdio.h>
#include <stdlib.h>

int main() {
  float metro, dec, cent, milim;
  printf("Insira a medida em metros:");
  scanf("%f", &metro);
  dec = metro * 10;
  cent = metro * 100;
  milim = metro * 1000;

  printf("Decímetro:%.1f\nCentímetro:%.1f\nMilímetro:%.1f\n", dec, cent, milim);
  return 0;
}
