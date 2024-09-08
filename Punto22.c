/*
Un pobre le dijo a un rico: " cada día le pagaré $100. A cambio, Ud. me dará el primer día
$1, el segundo $2, el tercero $4, el cuarto $8, es decir cada día el doble del anterior, y así
hasta terminar el mes de 30 días". Calcular:
a) las cantidades entregadas por el rico y por el pobre,
b) a partir de qué día el rico le dio más dinero al pobre, si es que esto ocurrió.
*/

#include <stdio.h>
int main() {
    int pobre = 0;          
    int rico = 0;           
    int pagoPobre = 100;    
    int pagoRico = 1;       
    int dia_supera = 0;
    for (int dia = 1; dia <= 30; dia++) {
        pobre += pagoPobre;
        rico += pagoRico;
        if (rico > pobre && dia_supera == 0) {
            dia_supera = dia; 
        }
        printf("Día %d: Pobre ha pagado $%d, Rico ha pagado $%d\n", dia, pobre, rico);
        pagoRico *= 2;
    }
    printf("Total entregado por el pobre: $%d\n", pobre);
    printf("Total entregado por el rico: $%d\n", rico);
    if (dia_supera != -1) {
        printf("El rico superó al pobre por primera vez en el día %d.\n", dia_supera);
    } else {
        printf("El rico nunca superó al pobre.\n");
    }

    return 0;
}
