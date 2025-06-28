#include <stdio.h>

/*Se crea tabla que muestra la conversion*/

int main(){
    int fahr, cels;
    int lower, upper, step;

    lower = 0; // Limite inferior de la tabla de temperaturas en grados Fahrenheit.
    upper =300; // Limite superior de la tabla de temperaturas en grados Fahrenheit.
    step=20; // Salto entre valores de la tabla de temperaturas.

    fahr = lower;

    while (fahr<=upper){ //Condición Inicial
        //Codigo ejecutado en cada Iteración
        cels = 5*(fahr-32)/9;
        printf("%3d %6d\n", fahr, cels); // Se muestra por pantalla la tabla
        fahr += step;
    }
    return 0;
}