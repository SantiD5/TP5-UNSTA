/*Ingresar un número natural de 4 o más dígitos, invertir el orden de sus dígitos.
Presentar por pantalla el número ingresado y su invertido.
Ejemplo: número = 34256, invertido = 65243*/
#include <stdio.h>

#include <stdio.h>

int main() {
    int A, DIG, INV = 0,B;
    do {
        printf("Ingrese un número natural de 4 o más dígitos: ");
        scanf("%d", &A);
    } while (A < 1000);
    B = A;
    while(A>0){
        DIG = A % 10;
        INV = INV * 10 + DIG;
        A = A / 10; 
      }
      printf("el numero ingresado es: %d\n", B);
      printf("el numero ingresado invertido es: %04d\n", INV);

    return 0;
}
