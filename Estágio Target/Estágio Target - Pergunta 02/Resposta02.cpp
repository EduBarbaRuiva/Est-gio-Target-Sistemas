#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == 'a') {
            count++;
        }
    }

    printf("A letra 'a' aparece %d vezes na string.\n", count);

    return 0;

}