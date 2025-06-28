#include <stdio.h>

int main(){

    int c; //Almacenamos la letrea convertida a un número 

    c= getchar(); //Esperamos a que el usuario introduzca la letra
    //putchar(c); //Imprimimos por la consola

    while(c != EOF){
        putchar(c);
        c = getchar();
    }

    return 0;
}   