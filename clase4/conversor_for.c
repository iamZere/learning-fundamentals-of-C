#include <stdio.h>

/*Codigo reutilizado de la clase 3 para crear una utilizando un bucle for*/

int main(){
    float fahr, cels;
    int lower, upper, step;

    lower = 0; // Limite inferior de la tabla de temperaturas en grados Fahrenheit.
    upper =300; // Limite superior de la tabla de temperaturas en grados Fahrenheit.
    step=20; // Salto entre valores de la tabla de temperaturas.

    fahr = lower;

    for(fahr=0; fahr<=300; fahr +=20){
        //Codigo ejecutado en cada Iteración
        cels = 5.0*(fahr-32.0)/9.0;
        printf("%3.0f %6.1f\n", fahr, cels); // Se muestra por pantalla la tabla
    }

    //Comparacion con estructura while
    
    /*fahr = lower;

    while (fahr<=upper){ //Condición Inicial
        //Codigo ejecutado en cada Iteración
        cels = 5.0*(fahr-32.0)/9.0;
        printf("%3.0f %6.1f\n", fahr, cels); // Se muestra por pantalla la tabla
        fahr += step;
    }*/

    return 0;
}