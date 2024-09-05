/*
Ingresar un valor L encuentre el valor de N de manera tal que se cumpla que:
1 + 2 + 3 + 4 +. . .+ N <= L
*/
#include <stdio.h>

int main() {
    int L, N = 0, suma = 0;
    printf("Ingrese el valor de L: ");
    scanf("%d", &L);
    while (suma + (N + 1) <= L) {
        N++;
        suma += N;
    }
    printf("El valor de N es: %d\n", N);
    return 0;
}
