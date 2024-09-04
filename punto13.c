/*Ingresar un número de 4 dígitos, presentar por pantalla todos sus divisores.*/

#include <stdio.h>

int main(){
  int A;
  do{
  printf("Ingrese un numero de 4 digitos:");
  scanf("%d",&A);
  }while(A < 1000 || A > 9999);
     printf("Los divisores de %d son:\n", A);
  for(int i = 1; i <= A; i++){
    if(A % i == 0){
      printf("%d\n",i);
    }
  }
  return 0;
}