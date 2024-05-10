#include <stdio.h>
int main (){
  int idade;
  printf ("Digite sua idade: ");
  scanf ("%d", &idade);

  if (idade<0){
    printf ("Isso é impossível");
    return 0;
  }

  if (idade > 5 && idade <= 7){
    printf ("Infantil A");
  } else if (idade > 8 && idade <= 10){
    printf ("Infantil B");
  } else if (idade > 11 && idade <= 13){
    printf ("Juvenil A");
  } else if (idade > 14 && idade <= 17){
    printf ("Juvenil B");
  } else {
    printf ("Sênior");
  }
  return 0;
}
