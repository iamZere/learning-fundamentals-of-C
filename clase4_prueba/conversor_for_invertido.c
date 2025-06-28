#include <stdio.h>

int main(){
    float fahr, cels;
    int lower, upper, step;

    lower = 0; // Limite inferior de la tabla de temperaturas en grados Fahrenheit.
    upper =300; // Limite superior de la tabla de temperaturas en grados Fahrenheit.
    step=20; // Salto entre valores de la tabla de temperaturas.

    fahr = upper;

    for(fahr=300; fahr>=0; fahr -=20){
        //Codigo ejecutado en cada Iteración
        cels = 5.0*(fahr-32.0)/9.0;
        printf("%3.0f %6.1f\n", fahr, cels); // Se muestra por pantalla la tabla
    }

    return 0;
}