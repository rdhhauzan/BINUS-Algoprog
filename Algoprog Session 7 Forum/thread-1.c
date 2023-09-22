/*
    Referensi untuk nama2 dan nama3 :
    https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
    https://forums.macrumors.com/threads/c-how-do-i-assign-a-value-to-a-pointer-following-malloc.1942318/
    https://stackoverflow.com/questions/46672153/how-to-allocate-memory-using-a-pointer-to-pointer-in-c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char nama1[20]; // Mendeklarasikan array karakter dengan kapasitas 20
    char *nama2;    // Mendeklarasikan pointer karakter
    char *nama3[20]; // Mendeklarasikan array 20 pointer karakter

    // Mengisi nama1 dengan string "Brisia Jodie"
    strcpy(nama1, "Brisia Jodie");

    // Mengalokasikan memori untuk nama2 dan menyalin string "Brisia Jodie" ke dalamnya
    nama2 = (char *)malloc(strlen("Brisia Jodie") + 1);
    strcpy(nama2, "Brisia Jodie");

    // Mengalokasikan memori untuk nama3[0] dan menyalin string "Brisia Jodie" ke dalamnya
    nama3[0] = (char *)malloc(strlen("Brisia Jodie") + 1);
    strcpy(nama3[0], "Brisia Jodie");

    // Cetak hasilnya
    printf("nama1: %s\n", nama1);
    printf("nama2: %s\n", nama2);
    printf("nama3[0]: %s\n", nama3[0]);

    // Jangan lupa untuk membebaskan memori yang dialokasikan
    free(nama2);
    free(nama3[0]);

    return 0;
}
