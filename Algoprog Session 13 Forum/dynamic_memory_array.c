#include <stdio.h>
#include <stdlib.h>

int main() {
    int SIZE = 9;
    int* dataB;
    dataB = (int*)malloc(SIZE * sizeof(int)); // KODE B

    // Inisialisasi data
    for (int i = 0; i < SIZE; i++) {
        dataB[i] = (i + 1) * 2;
    }

    // Print all data
    printf("Data B (Dynamic Memory Allocation):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", dataB[i]);
    }
    printf("\n");

    free(dataB); // Dealokasi memori dinamis

    return 0;
}
