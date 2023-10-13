#include <stdio.h>

void ordenacionInsercion(int VEC[], int N) {
    int i, j, temp;

    for (i = 1; i < N; i++) {
        temp = VEC[i];
        j = i - 1;

        while (j >= 0 && VEC[j] > temp) {
            VEC[j + 1] = VEC[j];
            j--;
        }

        VEC[j + 1] = temp;
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

    ordenacionInsercion(VEC, N);

    printf("Arreglo VEC ordenado en forma creciente:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", VEC[i]);
    }
    printf("\n");

    return 0;
}
