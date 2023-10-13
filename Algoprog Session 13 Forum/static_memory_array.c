#include <stdio.h>

int main() {
    int SIZE = 9;
    int dataA[SIZE]; // KODE A

    // Inisialisasi data
    for (int i = 0; i < SIZE; i++) {
        dataA[i] = i + 1;
    }

    // Print all data
    printf("Data A (Static Memory Allocation):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", dataA[i]);
    }
    printf("\n");

    return 0;
}
