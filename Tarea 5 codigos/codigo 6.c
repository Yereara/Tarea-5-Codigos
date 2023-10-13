#include <stdio.h>

int main() {
    double VEC[100]; // Arreglo para almacenar los números reales
    int n;
    double sumaCuadrados = 0.0;

    // Ingresar los elementos en el arreglo VEC
    printf("Ingresa los elementos del arreglo VEC (hasta 100 elementos).\n");
    printf("Finaliza ingresando un valor negativo o 0.\n");

    for (n = 0; n < 100; n++) {
        printf("Elemento %d: ", n + 1);
        scanf("%lf", &VEC[n]);

        // Si el usuario ingresa un valor negativo o cero, detener la entrada de datos
        if (VEC[n] <= 0) {
            break;
        }
    }

    // Calcular la suma de los cuadrados de los números en el arreglo VEC
    for (int i = 0; i < n; i++) {
        sumaCuadrados += VEC[i] * VEC[i];
    }

    // Imprimir la suma de los cuadrados
    printf("La suma de los cuadrados de los elementos es: %lf\n", sumaCuadrados);

    return 0;
}
