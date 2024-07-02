#include <stdio.h> // Libreria utilizada para la entrada y salida de datos

// Función para obtener las dimensiones de la matriz
void obtenerDimensiones(int matriz[3][3], int filas, int columnas, int *num_filas, int *num_columnas) {
    *num_filas = filas;
    *num_columnas = columnas;
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

    int filas = 3; // Se declara como entero
    int columnas = 3; // Se declara como entero   
    int num_filas, num_columnas; // Se declara como entero

    // Llamada a la función para obtener las dimensiones
    obtenerDimensiones(matriz, filas, columnas, &num_filas, &num_columnas);

    // Mostrar el resultado
    printf("La matriz tiene %d filas y %d columnas.\n", num_filas, num_columnas);

    return 0;
}
