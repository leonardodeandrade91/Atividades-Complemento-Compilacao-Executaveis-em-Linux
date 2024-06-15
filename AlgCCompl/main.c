#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int x = 10;

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "portuguese");

    int x = -1;
    int b;

    {
        extern int x;
        b = x;
    }

    printf("Valor de x: %d\n", x);
    printf("Valor de b (x global): %d\n", b);

    return 0;
}
