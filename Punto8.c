/*
Ingresar las coordenadas de N puntos en el plano indicar cuántos de ellos están :
a) en el origen de coordenadas
b) en el eje x
c) en el eje y
d) en el primer cuadrante
e) en el segundo cuadrante
f) en el tercer cuadrante
g) en el cuarto cuadrante
*/
#include <stdio.h>

int main() {
    int N, x, y;
    int origen = 0, eje_x = 0, eje_y = 0;
    int primer_cuadrante = 0, segundo_cuadrante = 0, tercer_cuadrante = 0, cuarto_cuadrante = 0;
    printf("Ingresa la cantidad de puntos: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        printf("Ingresa las coordenadas del punto %d (x y): ", i);
        scanf("%d %d", &x, &y);

        if (x == 0 && y == 0) {
            origen++;
        } else if (x == 0) {
            eje_y++;
        } else if (y == 0) {
            eje_x++;
        } else if (x > 0 && y > 0) {
            primer_cuadrante++;
        } else if (x < 0 && y > 0) {
            segundo_cuadrante++;
        } else if (x < 0 && y < 0) {
            tercer_cuadrante++;
        } else if (x > 0 && y < 0) {
            cuarto_cuadrante++;
        }
    }

    printf("Puntos en el origen: %d\n", origen);
    printf("Puntos en el eje X: %d\n", eje_x);
    printf("Puntos en el eje Y: %d\n", eje_y);
    printf("Puntos en el primer cuadrante: %d\n", primer_cuadrante);
    printf("Puntos en el segundo cuadrante: %d\n", segundo_cuadrante);
    printf("Puntos en el tercer cuadrante: %d\n", tercer_cuadrante);
    printf("Puntos en el cuarto cuadrante: %d\n", cuarto_cuadrante);

    return 0;
}
