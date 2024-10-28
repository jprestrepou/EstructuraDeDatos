#include <stdio.h>

int main() {
    int num = 123;
    char str[10];
    sprintf(str, "%d", num);
    printf("La cadena es: %s\n", str);
    return 0;
}
