#include <stdio.h> // LIbreria para la entrada y salida de datos

// Función para imprimir una matriz cuadrada de tamaño 3x3
void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Se imprime un salto de linea para terminar cada fila
    }
}

// Función para verificar si una matriz es simétrica
int esSimetrica(int matriz[3][3]) {
    int transpuesta[3][3];

    // Calcular la matriz transpuesta
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Verificar si la matriz original es igual a su transpuesta
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matriz[i][j] != transpuesta[i][j]) {
                return 0; // No es simétrica
            }
        }
    }

    return 1; // Es simétrica
}

int main() {
    int matriz[3][3]; // Declaracion de la matriz 3x3 como entera, estableciendole valores a cada fila y columna
    matriz[0][0] = 5;
    matriz[0][1] = 1; 
    matriz[0][2] = 3; 
    matriz[1][0] = 1; 
    matriz[1][1] = 8; 
    matriz[1][2] = 2; 
    matriz[2][0] = 3; 
    matriz[2][1] = 2; 
    matriz[2][2] = 5;

    // Imprimir la matriz
    printf("Matriz:\n");
    imprimirMatriz(matriz);

    // Verificar si la matriz es simétrica
    if (esSimetrica(matriz)) {
        printf("La matriz es simetrica.\n");
    } else {
        printf("La matriz no es simetrica.\n");
    }

    return 0;
}
