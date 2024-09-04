#include <stdio.h>
int main() {
    int N1, N2, suma = 0;
    do {
        printf("Ingrese el primer numero entero positivo (N1): ");
        scanf("%d", &N1);
    } while (N1 < 0);
    do {
        printf("Ingrese el segundo numero entero positivo (N2): ");
        scanf("%d", &N2);
    } while (N2 <= N1);
    printf("Suma = ");
    for (int i = N1 + 1; i < N2; i++) {
        suma += i;
        printf("%d", i);
        if (i < N2 - 1) {
            printf(" + ");
        }
    }
    printf(" = %d\n", suma);
    return 0;
}
