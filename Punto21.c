/*Se ingresan N pares de valores, donde el primer valor indica la edad de la persona y el
segundo valor su altura. Presentar por pantalla :
a) la mayor edad ingresada y el orden en que ingresó,
b) la menor altura ingresada y el orden en que ingresó,
c) el promedio de las edades,
d) el promedio de las alturas.*/
#include <stdio.h>

int main() {
    int N, edad, ordenMayorEdad = 0, ordenMenorAltura = 0;
    float altura, sumaEdades = 0, sumaAlturas = 0;
    int mayorEdad = 0;
    float menorAltura = 9999.0;  
    printf("Ingrese la cantidad de pares (edad y altura): ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        printf("Ingrese la edad y la altura de la persona %d: ", i);
        scanf("%d %f", &edad, &altura);
        sumaEdades += edad;
        sumaAlturas += altura;
        if (edad > mayorEdad) {
            mayorEdad = edad;
            ordenMayorEdad = i;  
        }
        if (altura < menorAltura) {
            menorAltura = altura;
            ordenMenorAltura = i;  
        }
    }
    float promedioEdad = sumaEdades / N;
    float promedioAltura = sumaAlturas / N;

    // Mostramos los resultados
    printf("\nResultados:\n");
    printf("a) La mayor edad ingresada es %d y fue en el orden %d.\n", mayorEdad, ordenMayorEdad);
    printf("b) La menor altura ingresada es %.2f y fue en el orden %d.\n", menorAltura, ordenMenorAltura);
    printf("c) El promedio de las edades es %.2f.\n", promedioEdad);
    printf("d) El promedio de las alturas es %.2f.\n", promedioAltura);

    return 0;
}
