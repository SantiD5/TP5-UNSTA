/*Dado el cuadrado cuyos vértices son A(0,0), B(0,M), C(M,M) y D(M,0) y siendo una de
sus diagonales el segmento comprendido entre (0,0) y (M,M), se ingresan N puntos.
Determinar la cantidad de puntos que pertenecen:
a) a los lados
b) a la diagonal indicada
c) al triángulo superior determinado por la diagonal y el cuadrado
d) al triángulo inferior.*/

#include <stdio.h>

int main() {
    int M, N, x, y;
    int enLados = 0, enDiagonal = 0, enTrianguloSuperior = 0, enTrianguloInferior = 0;
    printf("Ingresa el valor de M (lado del cuadrado): ");
    scanf("%d", &M);
    printf("Ingresa la cantidad de puntos (N): ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("Ingresa las coordenadas del punto %d (x y): ", i + 1);
        scanf("%d %d", &x, &y);
        if ((x == 0 && y >= 0 && y <= M) ||    
            (x == M && y >= 0 && y <= M) ||    
            (y == 0 && x >= 0 && x <= M) ||     
            (y == M && x >= 0 && x <= M)) {     
            enLados++;
        }
        else if (x == y && x >= 0 && x <= M) {
            enDiagonal++;
        }
        else if (y > x && x >= 0 && x <= M && y >= 0 && y <= M) {
            enTrianguloSuperior++;
        }
        else if (x > y && x >= 0 && x <= M && y >= 0 && y <= M) {
            enTrianguloInferior++;
        }
    }
    printf("\nResultados:\n");
    printf("Puntos en los lados: %d\n", enLados);
    printf("Puntos en la diagonal: %d\n", enDiagonal);
    printf("Puntos en el triángulo superior: %d\n", enTrianguloSuperior);
    printf("Puntos en el triángulo inferior: %d\n", enTrianguloInferior);
    return 0;
}
