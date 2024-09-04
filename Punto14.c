/*ingresar un número natural N. Sin dividir ni multiplicar determinar si ese valor es o no
par. Presentar por pantalla el resultado.*/

#include <stdio.h>

int main(){
  int N;
  printf("Ingresar un numero natural:");
  scanf("%d",&N);
  if(N % 2 == 0){
    printf("el numero es par");
  }else{
    printf("el numero es impar");
  }
  return 0;
  }