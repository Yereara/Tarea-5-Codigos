#include <stdio.h>
#include <math.h>

void calcularEstadisticas(int CAL[], int N) {
    int suma = 0;
    double media, varianza = 0, desviacion = 0;
    int moda = -1, maxFrecuencia = 0;

    // Calcular la suma de calificaciones
    for (int i = 0; i < N; i++) {
        suma += CAL[i];
    }

    // Calcular la media aritmética
    media = (double)suma / N;

    // Calcular la varianza
    for (int i = 0; i < N; i++) {
        varianza += pow(CAL[i] - media, 2);
    }
    varianza /= N;

    // Calcular la desviación estándar
    desviacion = sqrt(varianza);

    // Calcular la moda
    int frecuencia[6]; // Suponemos calificaciones de 0 a 5
    for (int i = 0; i < 6; i++) {
        frecuencia[i] = 0;
    }

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
}

int main() {
    int N;

    printf("Ingresa la cantidad de calificaciones (1 <= N <= 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("La cantidad de calificaciones debe estar en el rango de 1 a 100.\n");
        return 1; // Salir con un código de error
    }

    int CAL[N];

    printf("Ingresa las calificaciones de los alumnos (entre 0 y 5):\n");

    for (int i = 0; i < N; i++) {
        do {
            printf("Calificación %d: ", i + 1);
            scanf("%d", &CAL[i]);
        } while (CAL[i] < 0 || CAL[i] > 5);
    }

    calcularEstadisticas(CAL, N);

    return 0;
}
