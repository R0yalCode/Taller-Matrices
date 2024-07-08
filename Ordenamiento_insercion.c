#include <stdio.h> //Libreria utilizada para la entrada y salida de datos

int main() {
    int cartas[13] = {13, 4, 9, 7, 11, 10, 3, 5, 8, 1, 6, 2, 12}; // Se declara el arreglo con el nombre de "cartas" como entero, donde va a contener 13 elementos

    // Ordenamiento por inserción
    int i, j, CartaActual;
    for (i = 1; i < 13; i++) {
        CartaActual = cartas[i];
        j = i - 1;

        // Mover elementos mayores que CartaActual a una posición adelante de su posición actual
        while (j >= 0 && cartas[j] > CartaActual) {
            cartas[j + 1] = cartas[j];
            j = j - 1;
        }
        cartas[j + 1] = CartaActual;
    }

    // Imprimir las cartas ordenadas
    printf("Cartas ordenadas en orden ascendente:\n");
    for (i = 0; i < 13; i++) {
        printf("%d ", cartas[i]);
    }
    printf("\n "); // Se imprime un salto de linea 

    return 0;
}
