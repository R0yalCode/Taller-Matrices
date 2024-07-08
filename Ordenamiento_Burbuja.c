#include <stdio.h> // libreria utilizada para la entrada y salida de datos

int main() {
    int a, b, c, d; // Se declaran como entero las variables a utilizar
    int cartas[13] = {13, 4, 9, 7, 11, 10, 3, 5, 8, 1, 6, 2, 12}; // Se define la dimension del arreglo de 13 elementos y se declara como entero

    // Ordenamiento burbuja
    for(a = 0; a < 12; a++) {
        for(b = 0; b < 12 - a; b++) {
            c = b + 1;
            if(cartas[b] > cartas[c]) {
                // Intercambiar los elementos
                int temp = cartas[b];
                cartas[b] = cartas[c];
                cartas[c] = temp;
            }
        }
    }

    // Imprimir ya las cartas ordenadas
    printf("Cartas ordenadas:\n");
    for(a = 0; a < 13; a++) {
        printf("%d ", cartas[a]); // Se imprime las cartas ordenadas
    }
    printf("\n"); // Se imprime un salto de linea

    return 0;
}
