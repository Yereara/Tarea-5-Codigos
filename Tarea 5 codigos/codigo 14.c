#include <stdio.h>
#include <math.h>

void calcularEstadisticas(int ALU[], int N) {
    int suma = 0;
    double media, varianza = 0, desviacion = 0;
    int moda = -1, maxFrecuencia = 0;

    // Calcular la suma de calificaciones
    for (int i = 0; i < N; i++) {
        suma += ALU[i];
    }

    // Calcular la media aritmética
    media = (double)suma / N;

    // Calcular la varianza
    for (int i = 0; i < N; i++) {
        varianza += pow(ALU[i] - media, 2);
    }
    varianza /= N;

    // Calcular la desviación estándar
    desviacion = sqrt(varianza);

    // Calcular la moda
    int frecuencia[N];
    for (int i = 0; i < N; i++) {
        frecuencia[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        frecuencia[ALU[i]]++;
        if (frecuencia[ALU[i]] > maxFrecuencia) {
            maxFrecuencia = frecuencia[ALU[i]];
            moda = ALU[i];
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

    int ALU[N];

    printf("Ingresa las calificaciones de los alumnos:\n");

    for (int i = 0; i < N; i++) {
        printf("Calificación %d: ", i + 1);
        scanf("%d", &ALU[i]);
    }

    calcularEstadisticas(ALU, N);

    return 0;
}
