#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11 // Taille des tableaux

int main() {
    int tabInt[N];
    float tabFloat[N];

    srand(time(NULL)); 

    
    for (int i = 0; i < N; i++) {
        *(tabInt + i) = rand() % 101;             
        *(tabFloat + i) = ((float)rand() / RAND_MAX) * 10.0f; 
    }

    
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(tabInt + i));
    }
    printf("\n\n");

    printf("Tableau de float (avant) :\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(tabFloat + i));
    }
    printf("\n\n");

    
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            *(tabInt + i) *= 3;
            *(tabFloat + i) *= 3.0f;
        }
    }

    
    printf("Tableau d'entiers (après) :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(tabInt + i));
    }
    printf("\n\n");

    printf("Tableau de float (après) :\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(tabFloat + i));
    }
    printf("\n");

    return 0;
}
