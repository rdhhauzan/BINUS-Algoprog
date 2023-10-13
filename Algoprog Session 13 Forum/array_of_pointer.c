#include <stdio.h>
#include <string.h>

// Mendefinisikan struktur untuk data mahasiswa
struct Mahasiswa {
    char ID[7];
    char Nama[30];
    char Prodi[20];
    float GPA;
};

// Fungsi untuk meng-entry data mahasiswa
void inputData(struct Mahasiswa *mhs, int i) {
    printf("Masukkan data untuk Mahasiswa %d:\n", i + 1);
    printf("Masukkan ID: ");
    scanf("%s", mhs->ID);
    printf("Masukkan Nama: ");
    scanf(" %[^\n]s", mhs->Nama); // Membaca keseluruhan nama termasuk spasi
    printf("Masukkan Prodi: ");
    scanf(" %[^\n]s", mhs->Prodi); // Membaca keseluruhan prodi termasuk spasi
    printf("Masukkan GPA: ");
    scanf("%f", &mhs->GPA);
    printf("\n");
}

// Fungsi untuk menampilkan data mahasiswa
void displayData(struct Mahasiswa mhs, int i) {
    printf("Mahasiswa %d:\n", i + 1);
    printf("ID: %s\n", mhs.ID);
    printf("Nama: %s\n", mhs.Nama);
    printf("Prodi: %s\n", mhs.Prodi);
    printf("GPA: %.2f\n", mhs.GPA);
    printf("\n");
}

int main() {
    struct Mahasiswa mahasiswa[2]; // Menggunakan array dari struktur untuk menampung data dua mahasiswa (rubah angka 2 ke angka yang diinginkan untuk memberi maksimal data mahasiswa yang dimasukkan)

    for (int i = 0; i < 2; i++) {
        // Mengisi data mahasiswa
        inputData(&mahasiswa[i], i);
    }

    // Menampilkan data mahasiswa
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < 2; i++) {
        displayData(mahasiswa[i], i);
    }

    return 0;
}
