#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Enumerasi untuk Penerbit
enum Penerbit {
    GRAMEDIA,
    ELEXMEDIA,
    ANDI_OFFSET,
    PUSTAKA,
};

// Enumerasi untuk Kategori Buku
enum Kategori {
    FIKSI,
    TEKS,
    SEJARAH,
    NOVEL,
};

// Struct untuk data buku
struct Buku {
    char isbn[14];
    char judul[100];
    char pengarang[50];
    int tahun_terbit;
    enum Penerbit penerbit;
    enum Kategori kategori;
};

// Fungsi untuk menampilkan informasi buku
void tampilkanBuku(struct Buku buku) {
    printf("ISBN: %s\n", buku.isbn);
    printf("Judul: %s\n", buku.judul);
    printf("Pengarang: %s\n", buku.pengarang);
    printf("Tahun Terbit: %d\n", buku.tahun_terbit);

    // Konversi enum ke string untuk penerbit dan kategori
    char* penerbit_str;
    char* kategori_str;

    switch (buku.penerbit) {
        case GRAMEDIA:
            penerbit_str = "Gramedia";
            break;
        case ELEXMEDIA:
            penerbit_str = "Elexmedia";
            break;
        case ANDI_OFFSET:
            penerbit_str = "Andi Offset";
            break;
        case PUSTAKA:
            penerbit_str = "Pustaka";
            break;
    }

    switch (buku.kategori) {
        case FIKSI:
            kategori_str = "Fiksi";
            break;
        case TEKS:
            kategori_str = "Teks";
            break;
        case SEJARAH:
            kategori_str = "Sejarah";
            break;
        case NOVEL:
            kategori_str = "Novel";
            break;
    }

    printf("Penerbit: %s\n", penerbit_str);
    printf("Kategori: %s\n", kategori_str);
}

int main() {
    // Inisialisasi array buku
    struct Buku perpustakaan[100];
    int jumlah_buku = 0;

    int pilihan;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Tambah Buku\n");
        printf("2. Tampilkan Buku\n");
        printf("3. Hapus Buku\n");
        printf("4. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                // Tambah Buku
                if (jumlah_buku < 100) {
                    struct Buku buku;
                    printf("ISBN: ");
                    scanf("%s", buku.isbn);
                    printf("Judul: ");
                    scanf("%s", buku.judul);
                    printf("Pengarang: ");
                    scanf("%s", buku.pengarang);
                    printf("Tahun Terbit: ");
                    scanf("%d", &buku.tahun_terbit);
                    printf("Penerbit (0-Gramedia, 1-Elexmedia, 2-Andi Offset, 3-Pustaka): ");
                    scanf("%d", (int*)&buku.penerbit);
                    printf("Kategori (0-Fiksi, 1-Teks, 2-Sejarah, 3-Novel): ");
                    scanf("%d", (int*)&buku.kategori);

                    perpustakaan[jumlah_buku] = buku;
                    jumlah_buku++;
                    printf("Buku berhasil ditambahkan.\n");
                } else {
                    printf("Perpustakaan sudah penuh.\n");
                }
                break;
            case 2:
                // Tampilkan Buku
                if (jumlah_buku > 0) {
                    printf("\nDaftar Buku:\n");
                    for (int i = 0; i < jumlah_buku; i++) {
                        printf("Buku %d:\n", i + 1);
                        tampilkanBuku(perpustakaan[i]);
                        printf("\n");
                    }
                } else {
                    printf("Perpustakaan kosong.\n");
                }
                break;
            case 3:
                // Hapus Buku
                if (jumlah_buku > 0) {
                    int indeks_hapus;
                    printf("Masukkan indeks buku yang akan dihapus (1-%d): ", jumlah_buku);
                    scanf("%d", &indeks_hapus);
                    if (indeks_hapus >= 1 && indeks_hapus <= jumlah_buku) {
                        for (int i = indeks_hapus - 1; i < jumlah_buku - 1; i++) {
                            perpustakaan[i] = perpustakaan[i + 1];
                        }
                        jumlah_buku--;
                        printf("Buku berhasil dihapus.\n");
                    } else {
                        printf("Indeks buku tidak valid.\n");
                    }
                } else {
                    printf("Perpustakaan kosong.\n");
                }
                break;
            case 4:
                // Keluar
                printf("Terima kasih!\n");
                exit(0);
            default:
                printf("Pilihan tidak valid.\n");
        }
    }

    return 0;
}
