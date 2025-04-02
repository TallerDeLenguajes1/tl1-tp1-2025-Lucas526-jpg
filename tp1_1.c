#include <stdio.h>

int main(){

    // Declare un puntero en el procedimiento principal que apunte a una variable de algún tipo y muestre por pantalla lo siguiente:

    int numero = 5,*puntNumero;

    puntNumero = &numero;

    printf("Hola mundo\n");

//     1) El contenido del puntero
    printf("%d\n", *puntNumero);

// 2) La dirección de memoria almacenada por el puntero.
    printf("%d\n", puntNumero);

// 3) la dirección de memoria de la variable.
    printf("%d\n", &numero);

// 4) la dirección de memoria del puntero.
    printf("%d\n", &puntNumero);

// 5) el tamaño de memoria utilizado por esa variable usando la función sizeof()
    printf("%d\n", sizeof(numero));
}
