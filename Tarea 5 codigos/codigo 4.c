#include <stdio.h>

int main() {
    int VE1[10], VE2[10], VE3[10];
    int n;

    // Ingresar elementos para VE1
    printf("Ingresa %d elementos para VE1:\n", 10);
    for (n = 0; n < 10; n++) {
        printf("VE1[%d]: ", n);
        scanf("%d", &VE1[n]);
    }

    // Ingresar elementos para VE2
    printf("Ingresa %d elementos para VE2:\n", 10);
    for (n = 0; n < 10; n++) {
        printf("VE2[%d]: ", n);
        scanf("%d", &VE2[n]);
    }

    // Calcular el producto y almacenar en VE3
    for (n = 0; n < 10; n++) {
        VE3[n] = VE1[n] * VE2[n];
    }

    // Mostrar el resultado en VE3
    printf("Resultado del producto en VE3:\n");
    for (n = 0; n < 10; n++) {
        printf("VE3[%d]: %d\n", n, VE3[n]);
    }

    return 0;
}
