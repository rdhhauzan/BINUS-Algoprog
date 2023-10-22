#include <stdio.h>

int main() {
    FILE *file;
    char line[256];
    char ID[7], name[50], amount[50];

    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("File tidak dapat dibuka.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "%s %[^(0-9)] %s", ID, name, amount);
        printf("ID: %s\n", ID);
        printf("Nama: %s\n", name);
        printf("Nominal: Rp.%s\n", amount);
        printf("\n");
    }

    fclose(file);

    return 0;
}
