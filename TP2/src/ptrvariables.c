#include <stdio.h>

int main() {
    
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x123456789abcdef0;
    long long int lli = 0x123456789abcdef0;
    float f = 1.0f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

   
    printf("=== Avant manipulation ===\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : %016lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli : %p, Valeur de lli : %016llx\n", (void*)plli, (unsigned long long)lli);

    
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : %016llx\n", (void*)pld, *(unsigned long long*)pld); 

    
    *pc += 1;
    *ps += 1;
    *pi -= 1;
    *pli += 0x10;
    *plli -= 0x10;
    *pf = 0.5f;
    *pd = 2.718281828459045;
    *pld = 1.61803398875L;

    
    printf("\n=== Après manipulation ===\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : %016lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli : %p, Valeur de lli : %016llx\n", (void*)plli, (unsigned long long)lli);
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : %016llx\n", (void*)pld, *(unsigned long long*)pld); 
    return 0;
}
