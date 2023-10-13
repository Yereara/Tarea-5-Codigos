#include <stdio.h>

int main() {
    int votos[5] = {0};  // Inicializamos un arreglo para almacenar los votos de los candidatos (del 1 al 5)
    int voto;

    printf("Ingresa los votos de los candidatos. Finaliza con 0.\n");

    do {
        printf("Voto: ");
        scanf("%d", &voto);

        if (voto >= 1 && voto <= 5) {
            votos[voto - 1]++;  // Incrementa el conteo de votos para el candidato correspondiente
        } else if (voto != 0) {
            printf("Voto no válido. Ingresa un valor entre 1 y 5 o 0 para terminar.\n");
        }
    } while (voto != 0);

    printf("Resultados del conteo de votos:\n");

    for (int i = 0; i < 5; i++) {
        printf("Candidato %d: %d votos\n", i + 1, votos[i]);
    }

    return 0;
}
