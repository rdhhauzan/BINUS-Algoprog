#include <stdio.h>

int main() {
    int a = 10;
    int x1 = 4;
    int x2 = 1;
    int x3 = 1;
    int x4 = a + 1;

    for (int i = 0; i < 5; i++) {
        a -= 4;
        a += x1;
        a *= x2;
        a /= x3;
        a %= x4;
    }

    printf("Nilai akhir a: %d\n", a);

    return 0;
}
