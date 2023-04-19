#include <stdio.h>

int main() {
    int num, sum = 0, count = 0; // Declaramos las variables num para almacenar el número ingresado, sum para acumular la suma de los dígitos y count para contar la cantidad de dígitos
    float average; // Declaramos la variable average para almacenar el promedio
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &num); // Leemos el número ingresado por el usuario
    
    while (num != 0) { // Mientras el número no sea 0
        sum += num % 10; // Obtenemos el último dígito del número y lo sumamos al acumulador
        count++; // Incrementamos el contador de dígitos
        num /= 10; // Eliminamos el último dígito del número
    }
    
    average = (float) sum / count; // Calculamos el promedio
    
    printf("El promedio entero de los digitos del numero ingresado es: %.0f\n", average); // Mostramos el resultado por pantalla
    
    return 0;
}
