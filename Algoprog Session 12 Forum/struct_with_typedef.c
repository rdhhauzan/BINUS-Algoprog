#include <stdio.h>
#include <string.h>

// Mendefinisikan struct dengan typedef
typedef struct {
    char nama[50];
    int umur;
} Orang;

// Fungsi untuk menampilkan informasi orang
void tampilkanInformasiOrang(Orang orang) {
    printf("Nama: %s\n", orang.nama);
    printf("Umur: %d tahun\n", orang.umur);
}

int main() {
    Orang person;
    strcpy(person.nama, "ahfhsgha");
    person.umur = 30;

    tampilkanInformasiOrang(person);

    return 0;
}
