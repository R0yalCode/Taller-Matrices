#include <stdio.h> // Libreria utilizada para la entrada y salida de datos

// Función para imprimir un número en formato hexadecimal.
void ResulHexadecimal(int num) {
    // Arreglo para almacenar los dígitos hexadecimales
    char hexadeciNum[20];
    
    int i = 0;
    while (num != 0) {
        int residuo = num % 16;
        if (residuo < 10) {
            hexadeciNum[i] = residuo + '0';
        } else {
            hexadeciNum[i] = residuo - 10 + 'A';
        }
        i++;
        num = num / 16;
    }
    
    // Imprimir el número hexadecimal en orden inverso
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadeciNum[j]);
    }
}


int main(){

    int matriz1[3][3]; // Declaracion de la matriz 1 como entera, estableciendo valores a cada fila y columna.
    matriz1[0][0] = 1;
    matriz1[0][1] = 2; 
    matriz1[0][2] = 3; 
    matriz1[1][0] = 4; 
    matriz1[1][1] = 5; 
    matriz1[1][2] = 6; 
    matriz1[2][0] = 7; 
    matriz1[2][1] = 8; 
    matriz1[2][2] = 9;

    int matriz2[3][3]; // Declaracion de la matriz 2 como entera, estableciendo valores a cada fila y columna.
    matriz2[0][0] = 10;
    matriz2[0][1] = 11; 
    matriz2[0][2] = 12; 
    matriz2[1][0] = 13; 
    matriz2[1][1] = 14; 
    matriz2[1][2] = 15; 
    matriz2[2][0] = 16; 
    matriz2[2][1] = 17; 
    matriz2[2][2] = 18;

    int matrizr[3][3]; // Declaracion de la matriz resultado como entera

    // Sumar la matriz 1 con la matriz 2, guardando la suma en la matriz resultado
    for(int i = 0; i < 3; i++ ){
       for(int j = 0; j < 3; j++){
         matrizr[i][j] = matriz1[i][j] + matriz2[i][j]; 
        }
    }

    // Imprimir la matriz resultado (matrizr) en dos formatos.
    printf("La suma de la matriz 1 y la matriz 2 es:\n");

    // Se imprime el resultado en formato Decimal
    printf("Decimal:\n");
    
    for(int i = 0 ; i < 3; i++){

        for(int j = 0; j < 3; j++){
            printf("%d\t", matrizr[i][j]);
        }
        printf("\n");
    }

    // Se imprime el resultado en formato Hexadecimal
    printf("Hexadecimal:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ResulHexadecimal(matrizr[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    return 0; 
}
