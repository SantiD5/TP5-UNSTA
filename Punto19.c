/*Ingresar las coordenadas de N puntos en el plano, las mismas forman con el origen de
coordenadas un triángulo rectángulo. Presentar por pantalla la suma de las superficies
negativas y la suma de las positivas, indicar además la cantidad de triángulos en cada
cuadrante.*/

#include <stdio.h>
#define MAX_POINTS 100
float calcular_area(float x, float y) {
    return 0.5 * x * y; 
}
int main(){
  int N,i;
  float x[MAX_POINTS], y[MAX_POINTS];
  int suma_superficie_positiva = 0, suma_superficie_negativa = 0;
  int cuadrantes[4] = {0,0,0,0};
  printf('ingrese el numero de puntos: ');
  scanf("%d",&N);
  if(N > MAX_POINTS){
    printf("el numero de puntos no puede ser mayor que %d\n", MAX_POINTS);
    return 1;
  }
  for(i = 0; i < N; i++){

  float area = calcular_area(x[i], y[i]);
    if(area > 0){
      suma_superficie_positiva += area;
    }else{
      suma_superficie_negativa += area;
    }

    if(x[i] > 0 && y[i] > 0){
      cuadrantes[0]++;
    }else if(x[i] < 0 && y[i] > 0){
      cuadrantes[1]++;
    }else if(x[i] < 0 && y[i] < 0){
      cuadrantes[2];
    }else if(x[i] > 0 && y[i] < 0){
      cuadrantes[3]++;
    }
  }
   printf("\nSuma de superficies positivas: %.2f\n", suma_superficie_positiva);
    printf("Suma de superficies negativas: %.2f\n", suma_superficie_negativa);

    printf("\nCantidad de triángulos en cada cuadrante:\n");
    printf("Cuadrante 1: %d\n", cuadrantes[0]);
    printf("Cuadrante 2: %d\n", cuadrantes[1]);
    printf("Cuadrante 3: %d\n", cuadrantes[2]);
    printf("Cuadrante 4: %d\n", cuadrantes[3]);

    return 0;
}