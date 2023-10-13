#include <stdio.h>

int busquedaBinaria(int VEC[], int N, int ELE) {
    int izquierda = 0;
    int derecha = N - 1;

    while (izquierda <= derecha) {
        int centro = (izquierda + derecha) / 2;

        if (VEC[centro] == ELE) {
            return centro;  // Elemento encontrado, devuelve la posición
        } else if (VEC[centro] < ELE) {
            izquierda = centro + 1;
        } else {
            derecha = centro - 1;
        }
    }

    return -1;  // Elemento no encontrado
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

    int posicion = busquedaBinaria(VEC, N, ELE);

    if (posicion != -1) {
        printf("El elemento %d fue encontrado en la posición %d.\n", ELE, posicion);
    } else {
        printf("El elemento %d no fue encontrado en el arreglo.\n", ELE);
    }

    return 0;
}
