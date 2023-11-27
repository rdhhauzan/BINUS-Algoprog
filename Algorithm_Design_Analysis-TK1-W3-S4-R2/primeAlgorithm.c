#include <stdio.h>

int isPrime(int num, int div) {
    if (num <= 1) {
        return 0; // false
    } else if (div * div > num) {
        return 1; // true
    } else if (num % div == 0) {
        return 0; // false
    } else {
        return isPrime(num, div + 1);
    }
}

void generatePrimesRecursive(int N, int current, int *primes, int index) {
    if (index == N) {
        return;
    } else if (isPrime(current, 2)) {
        primes[index] = current;
        generatePrimesRecursive(N, current + 1, primes, index + 1);
    } else {
        generatePrimesRecursive(N, current + 1, primes, index);
    }
}

int main() {
    // Input dari pengguna
    int N;
    printf("Masukkan nilai N untuk mencetak N bilangan prima pertama: ");
    scanf("%d", &N);

    // Membuat array untuk menyimpan bilangan prima
    int primes[N];

    // Mendapatkan N bilangan prima pertama
    generatePrimesRecursive(N, 2, primes, 0);

    // Mencetak hasil
    printf("%d bilangan prima pertama: ", N);
    for (int i = 0; i < N; i++) {
        printf("%d ", primes[i]);
    }

    return 0;
}
