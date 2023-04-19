#include <stdio.h>

int main() {
    int i, sum = 0; // Declaramos las variables i para el bucle y sum para acumular la suma de los múltiplos
    
    for (i = 1; i <= 20; i++) { // Iteramos 20 veces
        sum += 3 * i; // Sumamos el múltiplo de 3 correspondiente a la iteración actual al acumulador
    }
    
    printf("El resultado de sumar los primeros 20 multiplos de 3 es: %d\n", sum); // Mostramos el resultado por pantalla
    
    return 0;
}
