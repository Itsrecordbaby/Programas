#include <stdio.h>

int main() {
    int num1, num2, dig1_num1, dig1_num2, prod_mutuo; // Declaramos las variables num1 y num2 para almacenar los números ingresados, dig1_num1 y dig1_num2 para almacenar el primer dígito de cada número, y prod_mutuo para almacenar el producto mutuo
    
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1); // Leemos el primer número ingresado por el usuario
    
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2); // Leemos el segundo número ingresado por el usuario
    
    dig1_num1 = num1 % 10; // Obtenemos el primer dígito del primer número mediante el operador módulo
    dig1_num2 = num2 % 10; // Obtenemos el primer dígito del segundo número mediante el operador módulo
    
    prod_mutuo = dig1_num1 * dig1_num2; // Calculamos el producto mutuo de los dos primeros dígitos
    
    printf("El producto mutuo del primer digito de cada numero es: %d\n", prod_mutuo); // Mostramos el resultado por pantalla
    
    return 0;
}
