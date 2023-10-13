#include <stdio.h>

int busquedaSecuencialOrdenada(int VEC[], int N, int ELE) {
    for (int i = 0; i < N; i++) {
        if (VEC[i] == ELE) {
            return i;  // Elemento encontrado, devuelve la posición
        } else if (VEC[i] > ELE) {
            return -1; // Elemento no encontrado, se detiene la búsqueda
        }
    }
    return -1;  // Elemento no encontrado, se llegó al final del arreglo
}

int main() {
    int N, ELE;

    printf("Ingresa el tamaño del arreglo VEC (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("El tamaño del arreglo debe estar en el rango de 1 a 100.\n");
        return 1;  // Salir con un código de error
    }

    int VEC[N];
    printf("Ingresa los elementos del arreglo VEC en orden creciente:\n");

    for (int i = 0; i < N; i++) {
        printf("VEC[%d]: ", i);
        scanf("%d", &VEC[i]);
    }

    printf("Ingresa el elemento que deseas buscar: ");
    scanf("%d", &ELE);

    int posicion = busquedaSecuencialOrdenada(VEC, N, ELE);

    if (posicion != -1) {
        printf("El elemento %d fue encontrado en la posición %d.\n", ELE, posicion);
    } else {
        printf("El elemento %d no fue encontrado en el arreglo.\n", ELE);
    }

    return 0;
}
