#include <stdio.h>


int longueur(const char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}


void copier(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; 
}


void concatener(char *dest, const char *src) {
    int i = 0;
    int j = 0;

    =
    while (dest[i] != '\0') {
        i++;
    }

    
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

int main() {
    char chaine1[100];
    char chaine2[100];
    char copie[100];
    char concat[200];

    printf("Entrez la première chaîne : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    printf("Entrez la deuxième chaîne : ");
    fgets(chaine2, sizeof(chaine2), stdin);

    
    if (chaine1[longueur(chaine1)-1] == '\n')
        chaine1[longueur(chaine1)-1] = '\0';
    if (chaine2[longueur(chaine2)-1] == '\n')
        chaine2[longueur(chaine2)-1] = '\0';

    
    int len1 = longueur(chaine1);
    int len2 = longueur(chaine2);

    printf("\nLongueur de la première chaîne : %d\n", len1);
    printf("Longueur de la deuxième chaîne : %d\n", len2);

    
    copier(copie, chaine1);
    printf("\nCopie de la première chaîne : %s\n", copie);

    
    copier(concat, chaine1);  
    concatener(concat, chaine2); 
    printf("Concaténation des deux chaînes : %s\n", concat);

    return 0;
}
