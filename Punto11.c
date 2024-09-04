/*Ingresar dos números de cuatro dígitos expresados en el sistema binario, presentar por
pantalla ambos números y su suma.*/

#include <stdio.h>

int main() {
    int A, B, resultado = 0,tempA,tempB;
    int acarreo = 0;
    int posicion = 1;
    do {
        printf("Ingrese el primer número binario de 4 dígitos: ");
        scanf("%d", &A);
    } while (A < 1000 || A > 1111);
    do {
        printf("Ingrese el segundo número binario de 4 dígitos: ");
        scanf("%d", &B);
    } while (B < 1000 || B > 1111);
    tempA = A;
    tempB = B;

    while (tempA > 0 || tempB > 0 || acarreo > 0) {
        int suma = (tempA % 10) + (tempB % 10) + acarreo;
        acarreo = suma / 2;
        resultado += (suma % 2) * posicion;
        tempA /= 10;
        tempB /= 10;
        posicion *= 10;
    }

    printf("Primer número binario: %d\n", A);
    printf("Segundo número binario: %d\n", B);
    printf("Suma en binario: %05d\n", resultado);

    return 0;
}