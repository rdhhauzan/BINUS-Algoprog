#include <stdio.h>
#include <string.h>

// Mendefinisikan struct tanpa typedef
struct Orang {
    char nama[50];
    int umur;
};

// Fungsi untuk menampilkan informasi orang
void tampilkanInformasiOrang(struct Orang orang) {
    printf("Nama: %s\n", orang.nama);
    printf("Umur: %d tahun\n", orang.umur);
}

int main() {
    struct Orang person;
    strcpy(person.nama, "ahfhsgha");
    person.umur = 30;

    tampilkanInformasiOrang(person);

    return 0;
}
