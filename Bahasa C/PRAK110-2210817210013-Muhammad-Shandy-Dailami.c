#include <stdio.h>
#include <math.h>

int main() {
    float sisiA = 12;
    float sisiC = 5;
    float sisiB = sqrt(sisiA * sisiA + sisiC * sisiC);
    float kelilingSegitiga = sisiA + sisiB + sisiC;
    float luasSegitiga = 0.5 * sisiA * sisiC;
    printf("Diketahui :\n");
    printf("Alas = %.f cm\n", sisiC);
    printf("Tinggi = %.f cm\n\n", sisiA);
    printf("Jawab :\n");
    printf("Sisi A = %.f cm\n", sisiA);
    printf("Sisi B = %.f cm\n", sisiB);
    printf("Sisi C = %.f cm\n", sisiC);
    printf("Keliling = %.f cm\n",kelilingSegitiga);
    
    return 0;
}