/*Dada la ecuación de la recta y = 2/3 x - 2, ingresar las coordenadas de N puntos en el
plano. Mostrar: a) los puntos pertenecen a la recta, b) los puntos que están arriba y c)
los que están debajo de ella*
*/
#include <stdio.h>

int main() {
    int N;
    float x, y;
        printf("Ingrese la cantidad de puntos: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Ingrese las coordenadas del punto %d (x y): ", i);
        scanf("%f %f", &x, &y);
        float y_recta = (2.0 / 3.0) * x - 2;
        if (y == y_recta) {
            printf("El punto (%.2f, %.2f) pertenece a la recta.\n", x, y);
        } else if (y > y_recta) {
            printf("El punto (%.2f, %.2f) está por encima de la recta.\n", x, y);
        } else {
            printf("El punto (%.2f, %.2f) está por debajo de la recta.\n", x, y);
        }
    }

    return 0;
}
