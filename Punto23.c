#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    int puntos = 0;
    int tiros = 0;
    int tiro = 0;

    do {
        tiro = rand() % 6 + 1;  
        if (tiro % 2 != 0) {     
            puntos += tiro;
        }
        tiros++;                 
    } while (tiro % 2 != 0);     

    // Mostramos los resultados
    printf("La cantidad de tiros: %d\n", tiros - 1);  
    printf("Puntaje total: %d\n", puntos);            

    return 0;
}
