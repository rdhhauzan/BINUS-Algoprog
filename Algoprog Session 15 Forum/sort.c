#include <stdio.h>
#include <string.h>

// * use selection sort
void swap(char arr[][20], int i, int j) {
    char temp[20];
    strcpy(temp, arr[i]);
    strcpy(arr[i], arr[j]);
    strcpy(arr[j], temp);
}

void selectionSort(char arr[][20], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(arr, i, min_idx);
        }
    }
}

int main() {
    char nama[10][20] = {"Fahmi Harahap", "Icha Nurlisa", "Agus Gumilang", "Zelda Zuraida", "Felix Halim", "Deddy Corbuizer", "Hassan Makmur", "Makmun Sukur", "Bella Christie", "Chelshe Love"};
    int n = 10;

    printf("Sebelum diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nama[i]);
    }

    selectionSort(nama, n);

    printf("\nSetelah diurutkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nama[i]);
    }

    return 0;
}
