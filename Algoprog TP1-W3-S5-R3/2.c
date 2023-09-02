#include <stdio.h>

int main() {
    float totalBelanja = 0.0;    // Variabel untuk menyimpan total belanjaan dalam satu transaksi.
    int jumlahTransaksi = 0;     // Variabel untuk menghitung jumlah transaksi.
    float totalAkhir = 0;       // Variabel untuk menyimpan total akhir setelah semua transaksi.

    while (1) { // menggunakan while(1) untuk membuat infinite loop sampai pengguna memilih keluar/break
        float belanja;

        printf("Masukkan total belanja: Rp. ");
        scanf("%f", &belanja);

        // Menambah total belanja dengan total belanja saat ini
        totalBelanja += belanja;

        // Menghitung diskon berdasarkan total belanja
        float diskon = 0.0;
        if (totalBelanja >= 200000 && totalBelanja <= 500000) {
            diskon = 0.10;
        } else if (totalBelanja > 500000 && totalBelanja <= 1000000) {
            diskon = 0.20;
        } else if (totalBelanja > 1000000) {
            diskon = 0.30;
        }

        // Menghitung total belanja setelah diskon
        float totalSetelahDiskon = totalBelanja - (totalBelanja * diskon);
        totalAkhir += totalSetelahDiskon;
        printf("Total belanja setelah diskon: Rp. %.2f\n", totalSetelahDiskon);

        jumlahTransaksi++;
        totalBelanja = 0; // Mengatur ulang totalBelanja untuk perhitungan transaksi berikutnya

        // Mengecek apakah sudah 4 kali transaksi
        if (jumlahTransaksi == 4) {
            printf("Anda mendapatkan diskon tambahan 20%% karena sudah berbelanja 4 kali.\n");
            totalAkhir = totalAkhir - (totalAkhir * 0.20); // Diskon tambahan 20%
        }

        char lanjut;
        printf("Apakah ingin melanjutkan (y/n)? ");
        scanf(" %c", &lanjut);

        if (lanjut != 'y' && lanjut != 'Y') {
            break; // Keluar dari loop jika pengguna tidak ingin melanjutkan
        }
    }

    printf("Total belanja akhir setelah semua diskon: Rp. %.2f\n", totalAkhir);

    printf("Terima kasih telah berbelanja!\n");

    return 0;
}
