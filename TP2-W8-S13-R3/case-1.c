#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> // * untuk menggunakan tolower
#include <string.h> // * untuk menggunakan strchr

/* 
   * Referensi untuk mengecek string mempunyai karakter tertentu : https://stackoverflow.com/questions/58146750/how-do-i-check-if-a-string-contains-a-certain-character
   * Referensi untuk mengubah karakter menjadi huruf besar : https://www.geeksforgeeks.org/toupper-function-in-c/
   * Referensi untuk mengubah karakter menjadi huruf kecil : https://www.geeksforgeeks.org/tolower-function-in-c/
*/

// * Fungsi untuk menghitung jumlah huruf vokal dan nonvokal
int countVowelsAndConsonants(char *str) {
    int vowels = 0;
    int consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    return vowels * 10 + consonants;
}

// * Fungsi untuk mengecek apakah karakter merupakan awalan bulan yang valid
bool isValidMonthPrefix(char c) {
    char validPrefixes[] = "JFMAMJJASOND"; // Huruf awalan bulan yang valid
    c = toupper(c); // Ubah huruf input ke huruf besar
    return strchr(validPrefixes, c) != NULL;
}

int main() {
    char input;
    char c;

    do {
        printf("Masukkan huruf awalan bulan: ");
        scanf(" %c", &input);
        // Bersihkan buffer masukan jika ada karakter tambahan
        while ((c = getchar()) != '\n' && c != EOF);

        if (isValidMonthPrefix(input)) {
            break;
        } else {
            printf("Masukkan huruf awalan yang valid.\n");
        }
    } while (1);

    char *months[] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    int numMonths = 12;

    printf("Bulan yang memiliki awalan '%c':\n", input);
    for (int i = 0; i < numMonths; i++) {
        if (toupper(months[i][0]) == toupper(input)) {
            printf("%d. %s\n", i + 1, months[i]);
        }
    }

    int choice;
    printf("Pilih bulan (1-%d): ", numMonths);
    scanf("%d", &choice);

    if (choice >= 1 && choice <= numMonths) {
        char *selectedMonth = months[choice - 1];
        int count = countVowelsAndConsonants(selectedMonth);
        int vowels = count / 10;
        int consonants = count % 10;

        printf("Bulan yang Anda pilih: %s\n", selectedMonth);
        printf("Jumlah huruf vokal: %d\n", vowels);
        printf("Jumlah huruf nonvokal: %d\n", consonants);
    } else {
        printf("Pilihan bulan tidak valid.\n");
    }

    return 0;
}