/*Se ingresan N valores numéricos. Determinar el mayor y el menor de los valores
ingresados.*/
#include <stdio.h>

int main(){
  int A,B,menor, mayor;
  printf("¿Cuántos números desea ingresar? ");
  scanf("%d",&A);
  printf("Ingrese el primer número: ");
    scanf("%d", &B);
    menor = B;
    mayor = B;
  for(int i = 0; i < A; i++){
    printf("ingrese el siguiente numero:\n");
    scanf("%d",&B);
    if(B < menor){
      menor = B;
    }
    if(B > mayor){
      mayor = B;
    }

  }
  printf("el menor numero ingresado es: %d\n", menor);
  printf("el mayor numero ingresado es: %d\n", mayor);
  return 0;
}
