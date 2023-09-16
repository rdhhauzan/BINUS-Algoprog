#include <stdio.h>

// Fungsi dummy untuk setiap pilihan menu
void menuAdd() {
    printf("Fungsi Add sedang dipanggil...\n");
}

void menuView() {
    printf("Fungsi View sedang dipanggil...\n");
}

void menuDelete() {
    printf("Fungsi Delete sedang dipanggil...\n");
}

void menuUpdate() {
    printf("Fungsi Update sedang dipanggil...\n");
}

void menuSearch() {
    printf("Fungsi Search sedang dipanggil...\n");
}

int main() {
    int choice;
    do {
        // Tampilkan judul program
        printf("=== Program Manajemen Data ===\n");

        // Tampilkan menu utama
        printf("Menu Utama:\n");
        printf("1. Add\n");
        printf("2. View\n");
        printf("3. Delete\n");
        printf("4. Update\n");
        printf("5. Search\n");
        printf("6. Quit\n");
        printf("Pilih opsi: ");
        scanf("%d", &choice);

        // Proses pilihan pengguna
        switch (choice) {
            case 1:
                menuAdd(); // Panggil fungsi Add
                break;
            case 2:
                menuView(); // Panggil fungsi View
                break;
            case 3:
                menuDelete(); // Panggil fungsi Delete
                break;
            case 4:
                menuUpdate(); // Panggil fungsi Update
                break;
            case 5:
                menuSearch(); // Panggil fungsi Search
                break;
            case 6:
                printf("Terima kasih, keluar dari program.\n");
                break;
            default:
                printf("Opsi tidak valid, silakan pilih lagi.\n");
        }
    } while (choice != 6);

    return 0;
}
