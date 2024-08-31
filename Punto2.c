/*Ingresar N números, presentar por pantalla el promedio de ellos. */
#include <stdio.h>

int main(){
  int A,B,sum = 0;
  float promedio;
  printf("¿Cuántos números desea ingresar? ");
  scanf("%d",&A);
  for(int i = 0; i < A; i++){
    printf("ingrese un numero:\n");
    scanf("%d",&B);
    sum += B;
  }
  promedio =(float)sum / A;
  printf("El promedio de los números es: %.2f\n", promedio);
  return 0;
}
