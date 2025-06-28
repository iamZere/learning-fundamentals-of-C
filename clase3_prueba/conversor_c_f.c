#include <stdio.h>

/*Prueba que deriva de la práctica 3, no es necesario incluir un bucle for, con while es suficiente*/

int main(){
    float celsius, fahrenheit;
    float lower, upper, jump;

    lower = -10.00;
    upper = 50.00;
    jump = 10.00;

    celsius = lower; 

    for(celsius = -10.00; celsius <= upper; celsius +=10.00){
        fahrenheit = celsius * 1.8 + 32.00;
        printf("%3.2f\t%3.2f\n", celsius, fahrenheit);
    }
    return 0;
}