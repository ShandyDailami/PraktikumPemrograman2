#include <stdio.h>

int main() {
    int sepatuA = 400000;
    int sepatuB = 350000;
    int diskonSepatuA = sepatuA - 0.13 * sepatuA;
    int diskonSepatuB = sepatuB - 0.21 * sepatuB;
    printf("Harga sepatu A adalah %d\n", sepatuA);
    printf("Harga sepatu B adalah %d\n", sepatuB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", diskonSepatuA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", diskonSepatuB);

    return 0; 
}