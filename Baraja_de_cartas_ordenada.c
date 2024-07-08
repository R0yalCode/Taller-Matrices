#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Para usar srand() y rand()

#define NUM_PALOS 4
#define NUM_NUMEROS 13

// Definimos los palos y los números de las cartas
char palos[NUM_PALOS] = {'C', 'T', 'E', 'D'}; // Corazón, Trebol, Espada, Diamante
char numeros[NUM_NUMEROS][3] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13"};

// Función para generar una baraja de cartas desordenada
void generarBarajaDesordenada(char *baraja) {
    int index = 0;
    for (int i = 0; i < NUM_PALOS; i++) {
        for (int j = 0; j < NUM_NUMEROS; j++) {
            // Concatenamos número y palo en formato requerido, "1C" para 1 de Corazón.
            baraja[index++] = numeros[j][0]; // número
            baraja[index++] = palos[i];// palo: Corazón, Trebol, Espada, Diamante
            baraja[index++] = ' '; // espacio para mejor visualización
        }
    }
    baraja[index] = '\0'; // Agregamos el caracter nulo para indicar el final de la cadena
}

// Función para barajar un array utilizando el algoritmo de Fisher-Yates
void barajarArray(char *array, int tamano) {
    srand(time(NULL)); // Inicializamos la semilla del generador de números aleatorios
    for (int i = tamano - 1; i > 0; i--) {
        int j = rand() % (i + 1); // Genera un índice aleatorio entre 0 e i (inclusive)
        // Intercambia elementos
        char temp[3];
        temp[0] = array[3*i];
        temp[1] = array[3*i+1];
        temp[2] = array[3*i+2];

        array[3*i] = array[3*j];
        array[3*i+1] = array[3*j+1];
        array[3*i+2] = array[3*j+2];

        array[3*j] = temp[0];
        array[3*j+1] = temp[1];
        array[3*j+2] = temp[2];
    }
}

// Función para ordenar la baraja de cartas según el requerimiento (primero por palo y luego por número)
void ordenarBaraja(char *baraja) {
    // Utilizamos un algoritmo de ordenamiento similar a bubble sort
    int tamano = NUM_PALOS * NUM_NUMEROS * 3;
    for (int i = 0; i < tamano - 3; i += 3) {
        for (int j = 0; j < tamano - i - 3; j += 3) {
            // Comparamos primero por palo
            if (baraja[j+1] > baraja[j+4] || (baraja[j+1] == baraja[j+4] && baraja[j] > baraja[j+3])) {
                // Intercambiamos las cartas
                char temp[3];
                temp[0] = baraja[j];
                temp[1] = baraja[j+1];
                temp[2] = baraja[j+2];

                baraja[j] = baraja[j+3];
                baraja[j+1] = baraja[j+4];
                baraja[j+2] = baraja[j+5];

                baraja[j+3] = temp[0];
                baraja[j+4] = temp[1];
                baraja[j+5] = temp[2];
            }
        }
    }
}

int main() {
    // Creamos un arreglo para almacenar la baraja de cartas
    char baraja[NUM_PALOS * NUM_NUMEROS * 3];

    // Generamos la baraja desordenada
    generarBarajaDesordenada(baraja);
    printf("Baraja desordenada:\n%s\n\n", baraja);

    // Barajamos la baraja desordenada
    barajarArray(baraja, NUM_PALOS * NUM_NUMEROS);

    // Ordenamos la baraja según el criterio especificado
    ordenarBaraja(baraja);
    printf("Baraja ordenada:\n%s\n", baraja);

    return 0;
}
