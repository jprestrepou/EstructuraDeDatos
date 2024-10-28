#include <stdio.h>

int main() {
    _Bool boolVal = 0; // False en C se representa como 0
    char str[6]; // "false" tiene 5 caracteres más el carácter nulo '\0'
    if (boolVal) {
        sprintf(str, "true");
    } else {
        sprintf(str, "false");
    }
    printf("La cadena es: %s\n", str);
    return 0;
}
