/*Ingresar dos números enteros positivos N1 y N2, con N1 < N2 y un número x cualquiera,
presentar por pantalla los múltiplos de x comprendidos entre N1 y N2*/

#include <stdio.h>

int main(){
  int N1,N2,x,B;
  do{  
  printf("Ingresa el primer numero entero positivo:");
  scanf("%d",&N1);
  }while(N1 < 0);
  
  do{
  printf("Ingresa el segundo numero entero positivo");
  scanf("%d",&N2);
  }while(N2<0);

  if(N1 < N2){
    printf("ingrese un numero cualquiera:");
    scanf("%d",&x);
  }
  printf("Los multiplos de %d comprendidos entre %d y %d son:\n", x, N1, N2);
  for (int A = N1; A <= N2; A++) {
    if (A % x == 0) {
      printf("%d\n", A);
    }
  }

  return 0;
}