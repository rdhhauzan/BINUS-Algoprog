#include <stdio.h>

int main() {
    int A[2][2], B[2][2], result[2][2];

    printf("Masukkan elemen-elemen matriks A (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            if (scanf("%d", &A[i][j]) != 1) {
                printf("Input tidak valid. Mohon masukkan bilangan bulat.\n");
                return 1; // Keluar dengan kode kesalahan
            }
        }
    }

    printf("Masukkan elemen-elemen matriks B (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            if (scanf("%d", &B[i][j]) != 1) {
                printf("Input tidak valid. Mohon masukkan bilangan bulat.\n");
                return 1; // Keluar dengan kode kesalahan
            }
        }
    }

    // Perkalian matriks
    result[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    result[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    result[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    result[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];

    // Output hasil perkalian matriks
    printf("Hasil perkalian matriks A dan B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
