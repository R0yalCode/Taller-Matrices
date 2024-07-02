#include <stdio.h> // Libreria utilizada para la entrada y salida de datos

int main(){
    
    int matriz1[3][3]; // Declaracion de la matriz 1 como entera, estableciendole valores a cada fila y columna. 
    matriz1[0][0] = 10;
    matriz1[0][1] = 11; 
    matriz1[0][2] = 12; 
    matriz1[1][0] = 13; 
    matriz1[1][1] = 14; 
    matriz1[1][2] = 15; 
    matriz1[2][0] = 16; 
    matriz1[2][1] = 17; 
    matriz1[2][2] = 18; 

    int matriz2[3][3]; // Declaracion de la matriz 2 como entera, estableciendo valores a cada fila y columna.  
    matriz2[0][0] = 1;
    matriz2[0][1] = 2; 
    matriz2[0][2] = 3; 
    matriz2[1][0] = 4; 
    matriz2[1][1] = 5; 
    matriz2[1][2] = 6; 
    matriz2[2][0] = 7; 
    matriz2[2][1] = 8; 
    matriz2[2][2] = 9;

    int matrizr[3][3]; // Declaracion de la matriz resultado como entera, donde se guardara el resultado de la matriz 1 y la matriz 2. 

    // Sumar la matriz 1 con la matriz 2, guardando la resta en la matriz resultado
    for(int i = 0; i<3; i++ ){
       for(int j = 0; j<3; j++){
         matrizr[i][j] = matriz1[i][j] - matriz2[i][j]; 
        }
    }

    // Imprimir la matriz resultado (matrizr), donde se guardo la resta de la matriz 1 y la matriz 2.
    printf("La resta de la matriz 1 y la matriz 2 es:\n");
    for(int i = 0 ; i <3; i++){

        for(int j = 0;  j<3; j++){
            printf("%d\t", matrizr[i][j]);
        }
        printf("\n"); // Se imprime un salto de linea para separar
    }

    return 0; 
}