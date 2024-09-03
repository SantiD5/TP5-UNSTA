/*Ingresar un número, entero positivo, expresado en el sistema decimal, convertirlo al
sistema binario. Presentar por pantalla el número en decimal y en binario */

#include <stdio.h>

int main(){
  int binario = 0,decimal,base = 1,resto;
  printf("Ingrese un numero Binario:\n");
  scanf("%d",&decimal);



  printf("\n\n");
  printf("El numero decimal ingresado es: %d\n",decimal);
  printf("El numero decimal expresado en binario es: %d",binario);
  return 0;
}