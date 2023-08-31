#include <stdio.h>

int main() {
    float x;

    // Meminta input dari pengguna untuk jarak dalam kilometer
    printf("Masukkan jarak dalam kilometer (x): ");
    scanf("%f", &x);

    // Konversi jarak dari kilometer ke meter dan sentimeter
    float meter = x * 1000;       // 1 km = 1000 m
    float sentimeter = x * 100000; // 1 m = 100 cm, 1 km = 100000 cm

    // Menampilkan hasil konversi ke meter dengan penekanan tombol Enter
    printf("Hasil konversi:\n");
    printf("%.2f kilometer = %.2f meter\n", x, meter);
    getchar(); // Menangkap Enter sebelum melanjutkan
    getchar(); // Menunggu Enter untuk melanjutkan

    // Menampilkan hasil konversi ke sentimeter dengan penekanan tombol Enter
    printf("%.2f kilometer = %.2f sentimeter\n", x, sentimeter);
    getchar(); // Menangkap Enter sebelum melanjutkan
    getchar(); // Menunggu Enter untuk melanjutkan

    return 0;
}
