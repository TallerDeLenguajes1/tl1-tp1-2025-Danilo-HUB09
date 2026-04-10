#include <stdio.h>

void main(){
    printf("Hola mundo");

    int variable = 42;
    int *puntero = &variable;

    // 1) Contenido del puntero (el valor al que apunta)
    printf("1) Contenido del puntero      : %d\n", *puntero);

    // 2) Direccion de memoria almacenada por el puntero (= direccion de variable)
    printf("2) Direccion almacenada en ptr: %p\n", (void *)puntero);

    // 3) Direccion de memoria de la variable
    printf("3) Direccion de la variable   : %p\n", (void *)&variable);

    // 4) Direccion de memoria del puntero en si mismo
    printf("4) Direccion del puntero      : %p\n", (void *)&puntero);

    // 5) Tamaño en bytes de la variable
    printf("5) Tamanio de la variable     : %zu bytes\n", sizeof(variable));
}