#include <stdio.h>
#include <math.h>

int main() {
    float totalPutaran = 5;
    float telahBerlari = 14;
    float sekaliPutaran = telahBerlari / totalPutaran;
    float phi = 3.14;
    float jariJariLingkaran = sekaliPutaran / (2 * phi);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", totalPutaran);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n", telahBerlari);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jariJariLingkaran);
}