#include <stdio.h>
#include <math.h>

int main() {
    int CAL[100];  // Arreglo de calificaciones
    int N;          // Número de calificaciones
    double suma = 0;
    double media, varianza = 0, desviacion = 0;
    int moda = -1, maxFrecuencia = 0;

    // Solicitar el número de calificaciones
    printf("Ingrese el número de calificaciones (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("El número de calificaciones debe estar en el rango de 1 a 100.\n");
        return 1; // Salir con un código de error
    }

    // Leer las calificaciones
    for (int i = 0; i < N; i++) {
        printf("Calificación %d: ", i + 1);
        scanf("%d", &CAL[i]);
        suma += CAL[i];
    }

    // Calcular la media aritmética
    media = suma / N;

    // Calcular la varianza
    for (int i = 0; i < N; i++) {
        varianza += pow(CAL[i] - media, 2);
    }
    varianza /= N;

    // Calcular la desviación estándar
    desviacion = sqrt(varianza);

    // Calcular la moda
    int frecuencia[101] = {0}; // Suponemos calificaciones entre 0 y 100

    for (int i = 0; i < N; i++) {
        frecuencia[CAL[i]]++;
        if (frecuencia[CAL[i]] > maxFrecuencia) {
            maxFrecuencia = frecuencia[CAL[i]];
            moda = CAL[i];
        }
    }

    printf("Media aritmética: %.2lf\n", media);
    printf("Varianza: %.2lf\n", varianza);
    printf("Desviación estándar: %.2lf\n", desviacion);

    if (moda != -1) {
        printf("Moda: %d\n", moda);
    } else {
        printf("No hay moda en el conjunto de calificaciones.\n");
    }

    return 0;
}
