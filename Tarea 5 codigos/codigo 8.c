#include <stdio.h>

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0; // 0 y 1 no son primos
    }
    
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // No es primo
        }
    }

    return 1; // Es primo
}

int main() {
    int primos[100]; // Arreglo para almacenar los primeros 100 números primos
    int contador = 0;
    int numero = 2;

    while (contador < 100) {
        if (esPrimo(numero)) {
            primos[contador] = numero;
            contador++;
        }
        numero++;
    }

    printf("Los primeros 100 números primos son:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", primos[i]);
    }
    printf("\n");

    return 0;
}