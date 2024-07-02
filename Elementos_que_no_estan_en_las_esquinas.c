#include <stdio.h> // Libreria utilizada para la entrada y salida de datos

int main() {
    int matriz[3][3]; // Declaracion de la matriz 3x3 como entera, estableciendole valores a cada fila y columna
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    // Imprimir los elementos que no están en las esquinas de la matriz
    printf("Elementos que no están en las esquinas de la matriz:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (!((i == 0 && j == 0) || (i == 0 && j == 2) || (i == 2 && j == 0) || (i == 2 && j == 2))) // Utilizando un if como condicional, para saber si el elemento esta en la esquina o no.
            {
                printf("%d ", matriz[i][j]); // Se imprime los elementos que no estan en las esquinas
            }
        }
    }
    printf("\n"); // Se imprime un salto de linea para separar
    
    return 0;
}
