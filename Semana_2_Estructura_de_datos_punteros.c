#include <stdio.h>

int main() {
    int num = 10; // Declaramos e inicializamos una variable entera
    int *ptr;     // Declaramos un puntero a entero

    ptr = &num;   // Asignamos la dirección de memoria de 'num' al puntero 'ptr'

    // Imprimimos el valor de 'num' y la dirección de memoria donde está almacenado
    printf("Valor de num: %d\n", num);
    printf("Dirección de memoria de num: %p\n", (void*)&num);

    // Imprimimos el valor apuntado por el puntero 'ptr' y la dirección de memoria que almacena
    printf("Valor apuntado por ptr: %d\n", *ptr);
    printf("Dirección almacenada en ptr: %p\n", (void*)ptr);

    return 0;
}
