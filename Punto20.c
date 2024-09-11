/*Dados 4 círculos concéntricos simulando un blanco para tiro, con centro en (0,0) y
cuyos radios y puntajes son los siguientes:
a) círculo 1 radio = 1 para r<=1 : 4 puntos
b) círculo 2 radio = 2 para r>1 y r<=2 : 3 puntos
c) círculo 3 radio = 3 para r>2 y r<=3: 2 puntos
d) círculo 4 radio=4 para r>3 y r<=4: 1 punto
Si se ingresan las coordenadas de N puntos en el plano, presentar por pantalla el puntaje
total obtenido por la posición de los puntos y su promedio.*/
#include <stdio.h>
#include <math.h>

int main() {
    int N;
    float x, y;
    float puntajeTotal = 0;
    const float radio1 = 1.0;
    const float radio2 = 2.0;
    const float radio3 = 3.0;
    const float radio4 = 4.0;

    const int puntos1 = 4;
    const int puntos2 = 3;
    const int puntos3 = 2;
    const int puntos4 = 1;
    printf("Ingrese la cantidad de puntos: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Ingrese las coordenadas del punto %d (x y): ", i);
        scanf("%f %f", &x, &y);
        float distancia = sqrt(x * x + y * y);
        if (distancia <= radio1) {
            puntajeTotal += puntos1;
        } else if (distancia <= radio2) {
            puntajeTotal += puntos2;
        } else if (distancia <= radio3) {
            puntajeTotal += puntos3;
        } else if (distancia <= radio4) {
            puntajeTotal += puntos4;
        }
    }

    float promedioPuntaje = N > 0 ? puntajeTotal / N : 0;
    printf("\nPuntaje total obtenido: %.2f\n", puntajeTotal);
    printf("Promedio de puntajes: %.2f\n", promedioPuntaje);

    return 0;
}
