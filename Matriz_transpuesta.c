#include <stdio.h> // LIbreria para la entrada y salida de datos

// Función para imprimir una matriz de tamaño 3x3
void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Se imprime un salto de linea para terminar cada fila
    }
}

// Función para calcular y imprimir la matriz transpuesta de la matriz original
void matrizTranspuesta(int matriz[3][3]) {
    int transpuesta[3][3];

    // Calcular la matriz transpuesta
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            transpuesta[j][i] = matriz[i][j]; // Intercambia filas por columnas para obtener la transpuesta
        }
    }

    // Imprimir la matriz transpuesta
    printf("Matriz transpuesta:\n");
    imprimirMatriz(transpuesta);
}

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

    // Imprimir la matriz original
    printf("Matriz original:\n");
    imprimirMatriz(matriz); // Se llama a la función imprimirMatriz para mostrar la matriz original

    // Generar e imprimir la matriz transpuesta
    matrizTranspuesta(matriz); // Se llama a la función matrizTranspuesta para calcular y mostrar la transpuesta

    return 0;
}
