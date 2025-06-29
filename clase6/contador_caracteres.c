#include <stdio.h>

int main(){

long nc; // Numero de caracteres

nc=0; // Inicializamos a cero el contador

printf("%ld\n",nc);

while(getchar()!= EOF) //Contará hasta que se escriba Ctrl + z
    ++nc;
printf("%ld\n",nc-1); //Imprime por pantalla el numero de caracteres

    return 0;
}