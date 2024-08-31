/*Se ingresan N números enteros, presentar el promedio de los pares y el promedio de
los impares. El cero no se cuenta.*/
#include <stdio.h>

int main(){
  int A,B,pares = 0,impares = 0,par = 0,impar = 0;
  float promedioPares = 0.0,promedioImpares = 0.0;
  printf("¿Cuántos números desea ingresar? ");
  scanf("%d",&A);
  for(int i = 0; i < A; i++){
    printf("ingrese un numero:\n");
    scanf("%d",&B);
    if(B % 2 == 0){
      par += 1;
      pares += B;
    }else{
      impar += 1;
      impares += B;
    }
  }
  promedioPares =(float)pares / par;
  promedioImpares = (float)impares/impar;
  printf("El promedio de los números pares es: %.2f\n", promedioPares);
  printf("El promedio de los números impares es: %.2f\n", promedioImpares);
  return 0;
}
