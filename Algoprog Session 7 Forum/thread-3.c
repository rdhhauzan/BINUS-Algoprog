#include <stdio.h>

// Fungsi untuk menukar nilai num1 dan num2 (pass by value)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk menukar nilai num1 dan num2 (pass by pointer)
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 55;
    int num2 = 77;

    printf("Sebelum swap (pass by value): num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("Setelah swap (pass by value): num1 = %d, num2 = %d\n", num1, num2);

    num1 = 55;
    num2 = 77;

    printf("Sebelum swap (pass by pointer): num1 = %d, num2 = %d\n", num1, num2);
    swapByPointer(&num1, &num2);
    printf("Setelah swap (pass by pointer): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
