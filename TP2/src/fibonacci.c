#include <stdio.h>

int main() {
    int n;
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("n doit être un entier positif.\n");
        return 0;
    }

    long long U0 = 0, U1 = 1;

    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    if (n == 0) {
        printf("%lld\n", U0);
        return 0;
    }

    
    printf("%lld, %lld", U0, U1);

    
    for (int i = 2; i <= n; i++) {
        long long Un = U0 + U1;
        printf(", %lld", Un);
        U0 = U1;
        U1 = Un;
    }

    printf("\n");
    return 0;
}
