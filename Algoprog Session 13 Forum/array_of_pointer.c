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
void inputData(struct Mahasiswa *mhs) {
    printf("Masukkan ID: ");
    scanf("%s", mhs->ID);
    printf("Masukkan Nama: ");
    scanf(" %[^\n]s", mhs->Nama); // Membaca keseluruhan nama termasuk spasi
    printf("Masukkan Prodi: ");
    scanf(" %[^\n]s", mhs->Prodi); // Membaca keseluruhan prodi termasuk spasi
    printf("Masukkan GPA: ");
    scanf("%f", &mhs->GPA);
}

// Fungsi untuk menampilkan data mahasiswa
void displayData(struct Mahasiswa mhs) {
    printf("ID: %s\n", mhs.ID);
    printf("Nama: %s\n", mhs.Nama);
    printf("Prodi: %s\n", mhs.Prodi);
    printf("GPA: %.2f\n", mhs.GPA);
}

int main() {
    struct Mahasiswa mahasiswa;

    // Mengisi data mahasiswa
    inputData(&mahasiswa);

    // Menampilkan data mahasiswa
    printf("\nData Mahasiswa:\n");
    displayData(mahasiswa);

    return 0;
}
