#include <stdio.h>

int main() {
    int Pinargote[5][5]; 

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            Pinargote[i][j] = 0;
        }
    }
    
    printf("Matriz Pinargote\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", Pinargote[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}

