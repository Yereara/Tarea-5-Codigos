#include <stdio.h>

void ordenacionSeleccion(int VEC[], int N) {
    int i, j, min, temp;

    for (i = 0; i < N - 1; i++) {
        min = i;
        for (j = i + 1; j < N; j++) {
            if (VEC[j] < VEC[min]) {
                min = j;
            }
        }
        // Intercambiar el elemento actual con el mínimo encontrado
        temp = VEC[i];
        VEC[i] = VEC[min];
        VEC[min] = temp;
    }
}

int main() {
    int N;

    printf("Ingresa el tamaño del arreglo VEC (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("El tamaño del arreglo debe estar en el rango de 1 a 100.\n");
        return 1; // Salir con un código de error
    }

    int VEC[N];
    printf("Ingresa los elementos del arreglo VEC:\n");

    for (int i = 0; i < N; i++) {
        printf("VEC[%d]: ", i);
        scanf("%d", &VEC[i]);
    }

    ordenacionSeleccion(VEC, N);

    printf("Arreglo VEC ordenado en forma creciente:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", VEC[i]);
    }
    printf("\n");

    return 0;
}
