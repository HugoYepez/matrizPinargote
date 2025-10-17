#include <stdio.h>

int main() {
    int filas, columnas;

    
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

   
    int Pinargote[filas][columnas];

    
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            if(i == j) {
                Pinargote[i][j] = 1; 
            } else {
                Pinargote[i][j] = 0;
            }
        }
    }

    // Imprimir la matriz
    printf("\nMatriz Pinargote:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            printf("%d ", Pinargote[i][j]);
        }
        printf("\n");
    }

    return 0;
}

