#include <stdio.h>
#include <stdlib.h>

int cuadradoDeUnNumero(int a);
void cuadradoDeUnNumeroVoid(int a);
void direcciones(int a);
void Invertir(int a,int b);
void orden(int a,int b);

int main(){

    // f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por pantalla.
    int resultado, numero = 5, cuadrado;
    cuadrado = cuadradoDeUnNumero(numero);
    printf("Cuadrado: %d\n",cuadrado);

    cuadradoDeUnNumeroVoid(numero);

    direcciones(numero);

    Invertir(5,1);

    orden(5,2);
}

// a) Haga una función que devuelva el cuadrado de un número
int cuadradoDeUnNumero(int a){
    int numero;
    numero = a * a;
    return numero;
    }

// b) Haga la función anterior, pero devolviendo un tipo void
void cuadradoDeUnNumeroVoid(int a){
    printf("Cuadrado void: %d\n",a * a);
    }

// c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
void direcciones(int a){
    printf("Direccion de la variable: %d\n",&a);
    printf("Contenido de la variable: %d\n",a);
}

// d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos. void Invertir(a,b) 
//deberá devolver en el valor de a en la variable b, y en el valor de b el valor de a
void Invertir(int a,int b){
    int auxiliar=a;
    a=b;
    b=auxiliar; 
    printf("Numero a: %d\n",a);
    printf("Numero b: %d\n",b);
}

// e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor. void orden(a,b) 
//deberá devolver en el valor de a el valor más chico, y en el valor de b el valor más grande
void orden(int a, int b){
    if (a > b)
    {
        int auxiliar;
        a = auxiliar;
        a = b;
        b = auxiliar;
    }
    printf("Numero a: %d\n",a);
    printf("Numero b: %d\n",b);
}

