#include <stdio.h>

/*Codigo reutilizado de la clase 2 para crear una tabla más fiel a la realidad
mediante la utilización de numeros decimales*/

int main(){
    float fahr, cels;
    int lower, upper, step;

    lower = 0; // Limite inferior de la tabla de temperaturas en grados Fahrenheit.
    upper =300; // Limite superior de la tabla de temperaturas en grados Fahrenheit.
    step=20; // Salto entre valores de la tabla de temperaturas.

    fahr = lower;

    while (fahr<=upper){ //Condición Inicial
        //Codigo ejecutado en cada Iteración
        cels = 5.0*(fahr-32.0)/9.0;
        printf("%3.0f %6.1f\n", fahr, cels); // Se muestra por pantalla la tabla
        fahr += step;
    }
    return 0;
}