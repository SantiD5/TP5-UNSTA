/*Ingresar dos números de cuatro dígitos expresados en el sistema binario, presentar por
pantalla ambos números y su suma.*/

#include <stdio.h>

int main() {
    int A, B, resultado = 0;
    int acarreo = 0;
    int posicion = 1;

    // Solicitar el primer número binario de 4 dígitos
    do {
        printf("Ingrese el primer número binario de 4 dígitos: ");
        scanf("%d", &A);
    } while (A < 1000 || A > 1111);

    // Solicitar el segundo número binario de 4 dígitos
    do {
        printf("Ingrese el segundo número binario de 4 dígitos: ");
        scanf("%d", &B);
    } while (B < 1000 || B > 1111);

    // Suma binaria
    while (A > 0 || B > 0 || acarreo > 0) {
        int suma = (A % 10) + (B % 10) + acarreo;
        acarreo = suma / 2;
        resultado += (suma % 2) * posicion;
        A /= 10;
        B /= 10;
        posicion *= 10;
    }

    // Mostrar los números ingresados y la suma binaria
    printf("Primer número binario: %04d\n", A);
    printf("Segundo número binario: %04d\n", B);
    printf("Suma en binario: %05d\n", resultado);

    return 0;
}
