#include <stdio.h>

void afficher_binaire(unsigned int n) {
    int i;
    int taille = sizeof(n) * 8; 

    
    for (i = taille - 1; i >= 0; i--) {
        unsigned int bit = (n >> i) & 1; 
        printf("%u", bit);
    }
    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille_tableau = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille_tableau; i++) {
        printf("Le nombre %u en binaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
    }

    return 0;
}
