#include <stdio.h>

/*
    menggunakan function "clearInputBuffer" untuk menghapus input buffer, referensi:
    https://stackoverflow.com/questions/7898215/how-can-i-clear-an-input-buffer-in-c
*/

void clearInputBuffer() {
    int c;
    // ! membaca karakter dari buffer masukan sampai mencapai newline (\n)
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // ! Inisialisasi variabel
    char names[100][50];
    int results[100];
    int numStudents;
    int passed = 0, failed = 0;

    // ! Input jumlah mahasiswa dengan validasi
    do {
        printf("Masukkan jumlah mahasiswa (maksimum 100): ");
        scanf("%d", &numStudents);
        clearInputBuffer(); // ! menghapus input buffer
    } while (numStudents <= 0 || numStudents > 100);

    // ! Input data hasil ujian untuk setiap mahasiswa
    for (int i = 0; i < numStudents; i++) {
        printf("Nama: ");
        scanf("%s", names[i]);
        clearInputBuffer(); // ! menghapus input buffer

        // ! Input hasil ujian dengan validasi
        do {
            printf("Masukkan hasil (1: Lulus, 2: Gagal) untuk %s: ", names[i]);

            // ! Menggunakan scanf untuk memeriksa apakah input angka valid
            if (scanf("%d", &results[i]) != 1) {
                clearInputBuffer(); // ! jika input tidak valid, maka hapus buffer input
                printf("Input tidak valid. Hanya boleh memasukkan 1 atau 2.\n");
            }

        } while (results[i] != 1 && results[i] != 2);

        // ! Hitung jumlah lulus dan gagal
        if (results[i] == 1) {
            passed++;
        } else if (results[i] == 2) {
            failed++;
        }
    }

    // ! Tampilkan hasil ujian untuk setiap mahasiswa
    printf("\nHasil Ujian Mahasiswa:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Nama: %s, Hasil: %s\n", names[i], results[i] == 1 ? "Lulus" : "Gagal");
    }

    // ! Hitung persentase kelulusan
    float passPercentage = (float) passed / numStudents * 100;

    // ! Tampilkan jumlah lulus, gagal, dan persentase kelulusan
    printf("\nJumlah Lulus: %d\n", passed);
    printf("Jumlah Gagal: %d\n", failed);
    printf("Persentase Kelulusan: %.2f%%\n", passPercentage);

    // ! Tampilkan output tambahan jika kelulusan lebih dari 80 persen
    if (passPercentage > 80.0) {
        printf("Kelulusan kelas telah mencapai target!\n");
    }

    return 0;
}
