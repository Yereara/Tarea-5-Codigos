#include <stdio.h>

int main() {
    int CAL[50]; // Arreglo para almacenar las calificaciones
    int frecuencia[6] = {0}; // Arreglo para almacenar la frecuencia de cada calificación (0-5)
    int maxFrecuencia = 0; // Variable para almacenar la frecuencia máxima
    int calificacionMaxFrecuencia; // Variable para almacenar la calificación con frecuencia máxima

    // Ingresar las calificaciones de los alumnos
    printf("Ingresa las calificaciones de los 50 alumnos (números entre 0 y 5):\n");
    for (int i = 0; i < 50; i++) {
        printf("Alumno %d: ", i + 1);
        scanf("%d", &CAL[i]);

        // Asegurarse de que la calificación esté en el rango de 0 a 5
        if (CAL[i] < 0 || CAL[i] > 5) {
            printf("Calificación no válida. Debe estar entre 0 y 5. Inténtalo de nuevo.\n");
            i--; // Decrementar i para volver a ingresar la calificación
        }
    }

    // Calcular la frecuencia de cada calificación
    for (int i = 0; i < 50; i++) {
        frecuencia[CAL[i]]++;
    }

    // Encontrar la frecuencia máxima y la calificación correspondiente
    for (int i = 0; i <= 5; i++) {
        if (frecuencia[i] > maxFrecuencia) {
            maxFrecuencia = frecuencia[i];
            calificacionMaxFrecuencia = i;
        }
    }

    // Imprimir la frecuencia de cada calificación
    printf("Frecuencia de cada calificación:\n");
    for (int i = 0; i <= 5; i++) {
        printf("Calificación %d: %d\n", i, frecuencia[i]);
    }

    // Imprimir la calificación con la frecuencia más alta
    printf("Calificación con la frecuencia más alta: %d (Frecuencia: %d)\n", calificacionMaxFrecuencia, maxFrecuencia);

    return 0;
}
