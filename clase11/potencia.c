#include <stdio.h>
//Include
int power(int base, int n);
int powerv2(int base, int n);


//Uso de funciones
int main(){
    int resultado;
    resultado = 0;

    resultado = power(2,4);
    printf("El valor de resultado es: %d\n" , resultado);

    resultado = powerv2(2,4);
    printf("El valor de resultado v2 es: %d\n" , resultado);

    resultado = power(3,2);
    printf("El valor de resultado es: %d\n" , resultado);

    resultado = powerv2(3,2);
    printf("El valor de resultado v2 es: %d\n" , resultado);
}


//Definicion de la funcion
int power(int base, int n){
    int i,p;
    p=1;
    /*printf("El valor de la base es: %d\n" , base);*/
    /*printf("El valor del exponente es: %d\n" , n);*/
    for(i=1; i<= n; ++i){
        p=p*base;
    }
    return p;
}

//Defininción de la función powerv2

int powerv2(int base, int n){

    int p;

    for(p=1;n>0;--n){
        p = p * base;
    }

    return p;
}