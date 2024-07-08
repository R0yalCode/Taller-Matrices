#include <stdio.h> // libreria utilizada para la entrada y salida de datos


// Función para multiplicar dos matrices de 3x3
void multiplicacionM(int matriz1[3][3], int matriz2[3][3], int matrizR[3][3]) {
    int i, j, k;
    // Recorremos las filas de la matriz resultado
    for (i = 0; i < 3; i++) {
        // Recorremos las columnas de la matriz resultado
        for (j = 0; j < 3; j++) {
            matrizR[i][j] = 0; // Inicializamos cada elemento de resultado en 0
            // Recorremos para calcular el valor en resultado[i][j]
            for (k = 0; k < 3; k++) {
                matrizR[i][j] += matriz1[i][k] * matriz2[k][j]; // Multiplicación de matrices
            }
        }
    }
}

// Función para imprimir una matriz
void imprimirMatriz(int matriz[3][3]) {
    int i, j;
    // Recorremos las filas de la matriz
    for (i = 0; i < 3; i++) {
        // Recorremos las columnas de la matriz
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]); // Imprimimos cada elemento seguido de un espacio
        }
        printf("\n"); // Nueva línea después de cada fila
    }
}

int main() {

    int matriz1[3][3]; // Declaracion de la matriz 3x3 como entera, estableciendole valores a cada fila y columna
    matriz1[0][0] = 1;
    matriz1[0][1] = 2; 
    matriz1[0][2] = 3; 
    matriz1[1][0] = 4; 
    matriz1[1][1] = 5; 
    matriz1[1][2] = 6; 
    matriz1[2][0] = 7; 
    matriz1[2][1] = 8; 
    matriz1[2][2] = 9;

    int matriz2[3][3]; // Declaracion de la matriz 3x3 como entera, estableciendole valores a cada fila y columna
    matriz2[0][0] = 1;
    matriz2[0][1] = 2; 
    matriz2[0][2] = 3; 
    matriz2[1][0] = 4; 
    matriz2[1][1] = 5; 
    matriz2[1][2] = 6; 
    matriz2[2][0] = 7; 
    matriz2[2][1] = 8; 
    matriz2[2][2] = 9;

    int matrizR[3][3]; // Se declara el la matriz resultado como entera

    // Multiplicar las matrices llamando a la función multiplicarMatrices
    multiplicacionM(matriz1, matriz2, matrizR);

    // Imprimir las matrices originales y el resultado de la multiplicación
    printf("Matriz 1:\n");
    imprimirMatriz(matriz1);
    printf("\nMatriz 2:\n");
    imprimirMatriz(matriz2);
    printf("\nResultado de la multiplicacion:\n");
    imprimirMatriz(matrizR);
    
    printf("\n"); // Se imprime una linea


    return 0; 
}
