#include <stdio.h>

int main() {
    int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};
    int *IX;

    printf("X = %d\tY = %d\tZ[0] = %d\tZ[1] = %d\tZ[2] = %d\tZ[3] = %d\tZ[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &X;
    Y = *IX;
    *IX = 1;
    printf("X = %d\tY = %d\tZ[0] = %d\tZ[1] = %d\tZ[2] = %d\tZ[3] = %d\tZ[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &Z[2];
    Y = *IX;
    *IX = 15;
    X = *IX + 5;
    *IX = *IX - 5;
    ++*IX;
    *IX += 1;
    printf("X = %d\tY = %d\tZ[0] = %d\tZ[1] = %d\tZ[2] = %d\tZ[3] = %d\tZ[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *(IX + 1);
    Y = *IX;
    IX = IX + 1;
    Y = *IX;
    printf("X = %d\tY = %d\tZ[0] = %d\tZ[1] = %d\tZ[2] = %d\tZ[3] = %d\tZ[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    return 0;
}
