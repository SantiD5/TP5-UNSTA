/*Ingresar un número expresado en el sistema binario, convertirlo al sistema decimal.
Presentar ambos números en el centro de la pantalla*/

#include <stdio.h>
int main(){
  int binario,decimal = 0,base = 1,resto;
  printf("Ingrese un numero Binario:\n");
  scanf("%d",&binario);

  int temp = binario;

  while (temp > 0)
  {
    resto = temp % 10;
    decimal += resto * base;
    temp = temp /10;
    base = base * 2;
  }
  printf("\n\n");
  printf("El numero binario ingresado es: %d\n",binario);
  printf("El numero binario expresado en decimal es: %d",decimal);
  return 0;
}