#include <stdio.h>

// a) Función que devuelve el cuadrado de un número
int cuadrado(int n) {
    return n * n;
}

// b) Función void que muestra el cuadrado de un número
void cuadradoVoid(int n) {
    printf("El cuadrado de %d es: %d\n", n, n * n);
}

// c) Muestra la dirección y el contenido de una variable
void mostrarDireccion(int *var) {
    printf("Direccion: %p\n", (void *)var);
    printf("Contenido: %d\n", *var);
}

// d) Invierte los valores entre dos variables
void invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// e) Ordena dos variables: menor en a, mayor en b
void orden(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b); // reutilizamos la función d)
    }
}

// f) Programa principal que usa todas las funciones
int main() {
    // a)
    int num = 5;
    printf("=== a) Cuadrado con retorno ===\n");
    printf("El cuadrado de %d es: %d\n\n", num, cuadrado(num));

    // b)
    printf("=== b) Cuadrado void ===\n");
    cuadradoVoid(num);
    printf("\n");

    // c)
    printf("=== c) Direccion y contenido ===\n");
    mostrarDireccion(&num);
    printf("\n");

    //d)
    int x = 10, y = 20;
    printf("=== d) Invertir ===\n");
    printf("Antes  -> x: %d | y: %d\n", x, y);
    invertir(&x, &y);
    printf("Despues -> x: %d | y: %d\n\n", x, y);

    // e)
    int p = 8, q = 3;
    printf("=== e) Ordenar ===\n");
    printf("Antes  -> a: %d | b: %d\n", p, q);
    orden(&p, &q);
    printf("Despues -> a: %d | b: %d\n\n", p, q);

    // f)
    printf("=== f) Leer pares e imprimir ordenados ===\n");
    int pares[3][2];
    int i;

    // Lectura de 3 pares
    for (i = 0; i < 3; i++) {
        printf("Ingrese par %d (dos numeros): ", i + 1);
        scanf("%d %d", &pares[i][0], &pares[i][1]);
    }

    printf("\n--- Resultados ---\n");
    for (i = 0; i < 3; i++) {
        int a = pares[i][0];
        int b = pares[i][1];

        printf("Par %d original : %d y %d\n", i + 1, a, b);

        orden(&a, &b);
        printf("Par %d ordenado : menor=%d | mayor=%d\n", i + 1, a, b);

        printf("Cuadrados      : %d^2=%d | %d^2=%d\n\n",
               a, cuadrado(a), b, cuadrado(b));
    }

    return 0;
}