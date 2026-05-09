#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int fibonacci(int n) {
    int a = 0;
    int b = 0;
    int n1 = 0;
    int n2 = 0;
    if ((n <= 1)) {
        return n;
    }
    n1 = (n - 1);
    n2 = (n - 2);
    a = fibonacci(n1);
    b = fibonacci(n2);
    return (a + b);
    return 0;
}

int main() {
    int r = 0;
    r = fibonacci(5);
    printf("%s", "fib(5) = ");
    printf("%d", (int)(r));
    printf("\n");
    return 0;
}
