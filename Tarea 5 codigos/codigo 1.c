#include <stdio.h>

int main() {
    int ARRE[100];
    int NUM;
    int i, count = 0;

    // Llenar el arreglo con valores (puedes hacerlo manualmente o con un bucle)
    // Aquí se llena con valores ficticios para el ejemplo.
    for (i = 0; i < 100; i++) {
        ARRE[i] = i % 10;  // Llenar el arreglo con valores del 0 al 9
    }

    // Solicitar al usuario el número a buscar
    printf("Ingresa el número a buscar: ");
    scanf("%d", &NUM);

    // Recorrer el arreglo y contar cuántas veces se encuentra NUM
    for (i = 0; i < 100; i++) {
        if (ARRE[i] == NUM) {
            count++;
        }
    }

    // Mostrar el resultado
    printf("El número %d se encuentra %d veces en el arreglo.\n", NUM, count);

    return 0;
}
