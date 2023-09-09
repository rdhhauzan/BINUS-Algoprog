#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char nim[20], nama[100];
    double nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char grade;

    // Input NIM dengan validasi panjang dan angka
    while (true) {
        printf("Masukkan NIM (10 digit angka): ");
        scanf("%s", nim);

        // Cek panjang NIM
        if (strlen(nim) != 10) {
            printf("NIM harus terdiri dari 10 digit angka.\n");
            continue;
        }

        // Cek apakah semua karakter dalam NIM adalah angka
        bool valid = true;
        for (int i = 0; i < 10; i++) {
            if (nim[i] < '0' || nim[i] > '9') {
                valid = false;
                break;
            }
        }

        if (!valid) {
            printf("NIM harus terdiri dari 10 digit angka.\n");
        } else {
            break;
        }
    }

    while (getchar() != '\n'); // Membersihkan buffer input

    // Input nama menggunakan fgets
    printf("Masukkan Nama: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = '\0';

    // Input nilai tugas dengan validasi angka
    while (true) {
        printf("Masukkan Nilai Tugas: ");
        if (scanf("%lf", &nilai_tugas) != 1 || nilai_tugas < 0 || nilai_tugas > 100) {
            printf("Masukkan angka yang valid antara 0 hingga 100 untuk Nilai Tugas.\n");
            while (getchar() != '\n'); // Bersihkan buffer input
            // continue;
            break;
        }
        break;
    }

    // Input nilai UTS dengan validasi angka
    while (true) {
        printf("Masukkan Nilai UTS: ");
        if (scanf("%lf", &nilai_uts) != 1 || nilai_uts < 0 || nilai_uts > 100) {
            printf("Masukkan angka yang valid antara 0 hingga 100 untuk Nilai UTS.\n");
            while (getchar() != '\n'); // Bersihkan buffer input
            continue;
        }
        break;
    }

    // Input nilai UAS dengan validasi angka
    while (true) {
        printf("Masukkan Nilai UAS: ");
        if (scanf("%lf", &nilai_uas) != 1 || nilai_uas < 0 || nilai_uas > 100) {
            printf("Masukkan angka yang valid antara 0 hingga 100 untuk Nilai UAS.\n");
            while (getchar() != '\n'); // Bersihkan buffer input
            continue;
        }
        break;
    }

    // Hitung nilai akhir dengan bobot
    nilai_akhir = (nilai_tugas * 0.4) + (nilai_uts * 0.3) + (nilai_uas * 0.3);

    // Tentukan grade berdasarkan nilai akhir
    if (nilai_akhir >= 90) {
        printf("\nHasil Perhitungan:\n");
        printf("NIM: %s\n", nim);
        printf("Nama: %s\n", nama);
        printf("Nilai Akhir: %.2lf\n", nilai_akhir);
        printf("Grade: A");
        // grade = "A";
    } else if (nilai_akhir >= 85) {
        printf("\nHasil Perhitungan:\n");
        printf("NIM: %s\n", nim);
        printf("Nama: %s\n", nama);
        printf("Nilai Akhir: %.2lf\n", nilai_akhir);
        printf("Grade: A-");
        // grade = "A-";
    } else if (nilai_akhir >= 80) {
        printf("\nHasil Perhitungan:\n");
        printf("NIM: %s\n", nim);
        printf("Nama: %s\n", nama);
        printf("Nilai Akhir: %.2lf\n", nilai_akhir);
        printf("Grade: B+");
        // grade = "B+";
    } else if (nilai_akhir >= 75) {
        printf("\nHasil Perhitungan:\n");
        printf("NIM: %s\n", nim);
        printf("Nama: %s\n", nama);
        printf("Nilai Akhir: %.2lf\n", nilai_akhir);
        printf("Grade: B");
        // grade = "B";
    } else if (nilai_akhir >= 70) {
        printf("\nHasil Perhitungan:\n");
        printf("NIM: %s\n", nim);
        printf("Nama: %s\n", nama);
        printf("Nilai Akhir: %.2lf\n", nilai_akhir);
        printf("Grade: B-");
        // grade = "B-";
    } else if (nilai_akhir >= 65) {
        printf("\nHasil Perhitungan:\n");
        printf("NIM: %s\n", nim);
        printf("Nama: %s\n", nama);
        printf("Nilai Akhir: %.2lf\n", nilai_akhir);
        printf("Grade: C");
        // grade = "C";
    } else if (nilai_akhir >= 50) {
        printf("\nHasil Perhitungan:\n");
        printf("NIM: %s\n", nim);
        printf("Nama: %s\n", nama);
        printf("Nilai Akhir: %.2lf\n", nilai_akhir);
        printf("Grade: D");
        // grade = "D";
    } else {
        printf("\nHasil Perhitungan:\n");
        printf("NIM: %s\n", nim);
        printf("Nama: %s\n", nama);
        printf("Nilai Akhir: %.2lf\n", nilai_akhir);
        printf("Grade: E");
        // grade = "E";
    }

    // Tampilkan hasil
    // printf("\nHasil Perhitungan:\n");
    // printf("NIM: %s\n", nim);
    // printf("Nama: %s\n", nama);
    // printf("Nilai Akhir: %.2lf\n", nilai_akhir);
    // printf("Grade: %c\n", grade);

    return 0;
}
