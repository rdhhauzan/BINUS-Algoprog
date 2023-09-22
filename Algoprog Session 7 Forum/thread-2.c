#include <stdio.h>

int main () {
    const char *kode[5] = {"COMP6112036", "COMP6112036", "COMP6112036", "COMP6112036", "ORTI1"};

    const char *matkul[5] = {
        "Algorithm and Programming",
        "Competency Orientation",
        "Discrete Mathematics and Linear Algebra",
        "General Orientation", "Academic Orientation PJJ Computer Science"
        };
    
    int sks[5] = {4, 4, 4, 4, 4};
    char grade[5] = {'A', 'A', 'A', 'A', 'A'};

    for (int i = 0; i < sizeof(kode)/sizeof(kode[0]); i++)
    {
        printf("Kode: %s\n", kode[i]);
        printf("Matkul: %s\n", matkul[i]);
        printf("SKS: %d\n", sks[i]);
        printf("Grade: %c\n", grade[i]);
        printf("\n");
    }
    
    return 0;
}