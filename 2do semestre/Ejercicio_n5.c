#include <stdio.h>

int main() {
   int num1, num2, i;

   // Solicitamos los dos números al usuario
   printf("Introduce el primer numero: ");
   scanf("%d", &num1);
   printf("Introduce el segundo numero: ");
   scanf("%d", &num2);

   // Si el primer número es mayor que el segundo, los intercambiamos
   if (num1 > num2) {
      int temp = num1;
      num1 = num2;
      num2 = temp;
   }

   // Recorremos todos los números entre num1 y num2, y mostramos los que terminan en 4
   for (i = num1; i <= num2; i++) {
      if (i % 10 == 4) {
         printf("%d\n", i);
      }
   }

   return 0;
}
