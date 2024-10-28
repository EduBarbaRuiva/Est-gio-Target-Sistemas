#include <stdio.h>


static int ehFibonacci(int num) {
    int a = 0, b = 1;
    while (a <= num) {
        if (a == num)
            return 1;
        int temp = a;
        a = b;
        b = temp + b;
    }
    return 0;
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf_s("%d", &numero);

    if (ehFibonacci(numero)) {
        printf("%d pertence à sequência de Fibonacci.\n", numero);
    }
    else {
        printf("%d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;

}
