#include <stdio.h>

int main() {
    int jumlahPasukan = 958730;
    int jumlahPahlawan = 5;
    int jumlahDilawanPerPahlawan = jumlahPasukan / jumlahPahlawan;
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", jumlahPasukan);
    printf("Jumlah pahlawan = %d\n", jumlahPahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", jumlahDilawanPerPahlawan);

    return 0;
}