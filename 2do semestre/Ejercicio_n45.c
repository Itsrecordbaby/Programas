#include <stdio.h>

int main() {
    int num, i, j; // Declaramos las variables num, i y j
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &num); // Leemos el número ingresado por el usuario
    
    for(i=1; i<=num; i++) { // Iniciamos un ciclo for para recorrer los enteros comprendidos entre 1 y el número ingresado
        int fact = 1; // Declaramos una variable fact para almacenar el factorial de cada entero
        for(j=1; j<=i; j++) { // Iniciamos otro ciclo for para calcular el factorial de cada entero
            fact *= j; // Multiplicamos la variable fact por j en cada iteración para obtener el factorial de i
        }
        printf("El factorial de %d es %d\n", i, fact); // Mostramos el resultado por pantalla
    }
    
    return 0;
}
