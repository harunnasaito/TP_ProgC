#include <stdio.h>
int main() {
    printf("char=%zu\nshort=%zu\nint=%zu\nlong=%zu\nlong long=%zu\nfloat=%zu\ndouble=%zu\nlong double=%zu\n",
        sizeof(char), sizeof(short), sizeof(int), sizeof(long),
        sizeof(long long), sizeof(float), sizeof(double), sizeof(long double));
}
