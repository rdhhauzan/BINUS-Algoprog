#include <stdio.h>
#include <string.h>

int main() {
    char jenisBensin[20];
    float literBensin, jarakTempuh, keiritan;
    
    printf("Masukkan jenis bensin (Pertamax/Pertalite): ");
    scanf("%s", jenisBensin);
    
    printf("Masukkan jumlah liter bensin: ");
    scanf("%f", &literBensin);
    
    printf("Masukkan jarak yang akan ditempuh (km): ");
    scanf("%f", &jarakTempuh);
    
    printf("Masukkan mode menyopir (konstan/stop&go): ");
    char mode[20];
    scanf("%s", mode);

    if (strcmp(jenisBensin, "Pertamax") == 0) {
        if (strcmp(mode, "konstan") == 0) {
            keiritan = 15.0;
        } else if (strcmp(mode, "stop&go") == 0) {
            keiritan = 10.0;
        } else {
            printf("Mode menyopir tidak valid.\n");
            return 1;
        }
    } else if (strcmp(jenisBensin, "Pertalite") == 0) {
        if (strcmp(mode, "konstan") == 0) {
            keiritan = 12.0;
        } else if (strcmp(mode, "stop&go") == 0) {
            keiritan = 8.0;
        } else {
            printf("Mode menyopir tidak valid.\n");
            return 1;
        }
    } else {
        printf("Jenis bensin tidak valid.\n");
        return 1;
    }

    float bensinDibutuhkan = jarakTempuh / keiritan;
    float bensinAkhir = literBensin - bensinDibutuhkan;

    if (bensinAkhir >= 0) {
        printf("Jumlah bensin yang digunakan: %.2f liter\n", bensinDibutuhkan);
        printf("Jumlah bensin akhir: %.2f liter\n", bensinAkhir);
    } else {
        printf("Bensin tidak cukup untuk menyelesaikan perjalanan.\n");
    }

    return 0;
}
