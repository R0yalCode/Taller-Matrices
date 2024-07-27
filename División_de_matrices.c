#include <stdio.h>

// Función para calcular el determinante de una matriz 3x3
float determinante(float matriz[3][3]) {
    return matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
         - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
         + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
}

// Función para calcular la adjunta de una matriz 3x3
void adjunta(float matriz[3][3], float adj[3][3]) {
    adj[0][0] =  (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]);
    adj[0][1] = -(matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]);
    adj[0][2] =  (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
    adj[1][0] = -(matriz[0][1] * matriz[2][2] - matriz[0][2] * matriz[2][1]);
    adj[1][1] =  (matriz[0][0] * matriz[2][2] - matriz[0][2] * matriz[2][0]);
    adj[1][2] = -(matriz[0][0] * matriz[2][1] - matriz[0][1] * matriz[2][0]);
    adj[2][0] =  (matriz[0][1] * matriz[1][2] - matriz[0][2] * matriz[1][1]);
    adj[2][1] = -(matriz[0][0] * matriz[1][2] - matriz[0][2] * matriz[1][0]);
    adj[2][2] =  (matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0]);
}

// Función para calcular la inversa de una matriz 3x3
void inversa(float matriz[3][3], float inversa[3][3]) {
    float det = determinante(matriz);
    if (det == 0) {
        printf("Error: La matriz no tiene inversa (el determinante es 0)\n");
        return;
    }
    float adj[3][3];
    adjunta(matriz, adj);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inversa[i][j] = adj[i][j] / det;
        }
    }
}

// Función para multiplicar dos matrices 3x3
void multiplicarMatrices(float matriz1[3][3], float matriz2[3][3], float resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

// Función para imprimir una matriz 3x3
void imprimirMatriz(float matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    float matriz2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    float invMatriz2[3][3];
    float resultado[3][3];

    inversa(matriz2, invMatriz2);

    printf("Inversa de la segunda matriz:\n");
    imprimirMatriz(invMatriz2);

    multiplicarMatrices(matriz1, invMatriz2, resultado);

    printf("Resultado de la division de las matrices:\n");
    imprimirMatriz(resultado);

    return 0;
}