#include <stdio.h> // Librería utilizada para la entrada y salida de datos

// Función para imprimir una matriz cuadrada de tamaño 3x3
void imprimirMatriz(float matriz[3][3]) {
    for (int i = 0; i < 3; ++i) { // Utilizando directamente el tamaño 3 para los bucles
        for (int j = 0; j < 3; ++j) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para calcular la matriz inversa de una matriz 3x3
int matrizInversa(float matriz[3][3], float inversa[3][3]) {
    // Calcular el determinante de la matriz original
    float det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
              - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
              + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);

    // Comprobar si la matriz es singular (determinante cercano a cero)
    if (det == 0) {
        printf("La matriz no tiene inversa porque su determinante es cero.\n");
        return 0;
    }

    // Calcular la matriz adjunta (transpuesta de la matriz de cofactores)
    float adjunta[3][3];
    adjunta[0][0] = matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1];
    adjunta[0][1] = -(matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]);
    adjunta[0][2] = matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0];
    adjunta[1][0] = -(matriz[0][1] * matriz[2][2] - matriz[0][2] * matriz[2][1]);
    adjunta[1][1] = matriz[0][0] * matriz[2][2] - matriz[0][2] * matriz[2][0];
    adjunta[1][2] = -(matriz[0][0] * matriz[2][1] - matriz[0][1] * matriz[2][0]);
    adjunta[2][0] = matriz[0][1] * matriz[1][2] - matriz[0][2] * matriz[1][1];
    adjunta[2][1] = -(matriz[0][0] * matriz[1][2] - matriz[0][2] * matriz[1][0]);
    adjunta[2][2] = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];

    // Calcular la matriz inversa multiplicando la adjunta por el inverso del determinante
    float inverso_det = 1.0 / det;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            inversa[i][j] = adjunta[i][j] * inverso_det;
        }
    }

    return 1;
}

int main() {
    float matriz[3][3]; // Declaración de la matriz 3x3 como flotante para permitir cálculos decimales
    matriz[0][0] = 1;
    matriz[0][1] = 2; 
    matriz[0][2] = 4; 
    matriz[1][0] = 4; 
    matriz[1][1] = 5; 
    matriz[1][2] = 6; 
    matriz[2][0] = 7; 
    matriz[2][1] = 8; 
    matriz[2][2] = 9;

    // Declaración de la matriz inversa
    float inversa[3][3];

    // Calcular la matriz inversa
    if (matrizInversa(matriz, inversa)) {
        // Imprimir la matriz original
        printf("Matriz original:\n");
        imprimirMatriz(matriz);

        // Imprimir la matriz inversa
        printf("Matriz inversa:\n");
        imprimirMatriz(inversa);
    }

    return 0;
}
