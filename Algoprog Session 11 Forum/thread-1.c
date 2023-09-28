#include <stdio.h>
#include <time.h>

int fibonacciIterative(int n) {
    if (n <= 1) {
        return n;
    }
    
    int prev = 0;
    int current = 1;
    int result = 0;

    for (int i = 2; i <= n; ++i) {
        result = prev + current;
        prev = current;
        current = result;
    }
    
    return result;
}

int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }
    
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n = 30; // Ubah n sesuai dengan bilangan Fibonacci yang ingin dihitung
    
    clock_t start, end;
    
    start = clock();
    int resultIterative = fibonacciIterative(n);
    end = clock();
    
    double timeIterative = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    start = clock();
    int resultRecursive = fibonacciRecursive(n);
    end = clock();
    
    double timeRecursive = ((double)(end - start)) / CLOCKS_PER_SEC;
    
    printf("Bilangan Fibonacci ke-%d dengan fungsi rekursif: %d (%f detik)\n", n, resultRecursive, timeRecursive);
    printf("Bilangan Fibonacci ke-%d dengan fungsi iterative: %d (%f detik)\n", n, resultIterative, timeIterative);
    
    return 0;
}
