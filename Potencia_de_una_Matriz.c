#include <stdio.h> // Libreria utilizada para la entrada y salida de datos

#define N 3 // Tamaño de las matriz (3x3)

// Función para imprimir una matriz
void imprimirMatriz(int matriz[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para multiplicar dos matrices de 3x3
void multiplicarMatrices(int matriz1[N][N], int matriz2[N][N], int resultado[N][N]) {
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            resultado[i][j] = 0; // Inicializar cada elemento de resultado a 0
            for (k = 0; k < N; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

// Función para copiar una matriz en otra
void copiarMatriz(int origen[N][N], int destino[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            destino[i][j] = origen[i][j];
        }
    }
}

// Función para elevar una matriz 3x3 a una potencia n
void elevarMatriz(int matriz[N][N], int n, int resultado[N][N]) {
    int i, j;
    int temp[N][N];
    
    // Inicializar resultado como la matriz original
    copiarMatriz(matriz, resultado);
    
    // Inicializar temp como la matriz original
    copiarMatriz(matriz, temp);
    
    // Multiplicar la matriz consigo misma n veces
    for (int count = 1; count < n; count++) {
        multiplicarMatrices(resultado, temp, resultado);
    }
}

int main() {
    int matriz[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 2; // Elevar la matriz al cuadrado
    int resultado[N][N];

    // Calcular la matriz elevada a la potencia n
    elevarMatriz(matriz, n, resultado);

    // Imprimir la matriz original y el resultado
    printf("Matriz original:\n");
    imprimirMatriz(matriz);
    printf("\nMatriz elevada a la potencia %d:\n", n);
    imprimirMatriz(resultado);

    return 0;
}
