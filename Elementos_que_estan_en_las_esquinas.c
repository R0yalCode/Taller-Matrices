#include <stdio.h> // Librería estándar para entrada y salida de datos

int main() {
    int matriz[3][3]; // Declaración de la matriz 3x3 como entera, con inicialización de valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    // Imprimir los elementos de las esquinas de la matriz usando bucles for
    printf("Elementos de las esquinas de la matriz:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if ((i == 0 && j == 0) || (i == 0 && j == 2) || (i == 2 && j == 0) || (i == 2 && j == 2)) {
                printf("%d ", matriz[i][j]); // Imprime el elemento si es una esquina
            }
        }
    }
    printf("\n"); // Salto de línea para separar

    return 0;
}
