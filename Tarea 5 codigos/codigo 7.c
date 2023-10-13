int main() {
    int N;
    printf("Ingresa el valor de N (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("El valor de N debe estar en el rango de 1 a 100.\n");
        return 1; // Salir con un código de error
    }

    int ARRE[#include <stdio.h>

N];
    printf("Ingresa %d enteros desordenados:\n", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &ARRE[i]);
    }

    // Proceso para eliminar elementos repetidos
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; ) {
            if (ARRE[i] == ARRE[j]) {
                for (int k = j; k < N - 1; k++) {
                    ARRE[k] = ARRE[k + 1];
                }
                N--; // Reducir el tamaño del arreglo
            } else {
                j++;
            }
        }
    }

    printf("Arreglo sin elementos repetidos:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", ARRE[i]);
    }
    printf("\n");

    return 0;
}