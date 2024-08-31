/*Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos
negativos y cuantos iguales a cero.*/
#include <stdio.h>

int main(){
  int A,B,positivos = 0,negativos = 0,cero = 0;
  printf("¿Cuántos números desea ingresar? ");
  scanf("%d",&A);
  for(int i = 0; i < A; i++){
    printf("ingrese un numero:\n");
    scanf("%d",&B);
    if(B == 0){
      cero += 1;
    }else if(B > 0){
      positivos +=1;
    }else if(B < 0){
      negativos +=1;
    }else{
      printf("no es un numero");
    }
  }
  printf("La cantidad de numeros positivos es: %d\n", positivos);
  printf("La cantidad de numeros negativos es: %d\n", negativos);
  printf("La cantidad de ceros es: %d\n", cero);
  return 0;
}
