#include <stdio.h>
int main() {
  float sal,prest;
  scanf ("%f",&sal);
  scanf ("%f",&prest);

  if (prest>sal*0.2){
    printf ("Emprestimo nao concedido");
  }else{
    printf ("Emprestimo concedido");
  }
  return 0;
}
