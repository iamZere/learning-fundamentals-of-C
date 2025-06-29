#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

    int c,nl,nw,nc,state; // Caracter, numero de lineas, numero de palabras y estado

    nl=nc=nw=0;
    state=OUT;

    while((c=getchar()) != EOF){
        ++nc;
        if(c=='\n') ++nl;
        if(c==' '|| c== '\n' || c== '\t')
            state=OUT;
        else if(state==OUT){
            state=IN;
            ++nw;
        }
    }

    printf("Lineas:%d , Caracteres:%d , Palabras: %d\n",nl,nc,nw); //Muestra por pantalla numero de lineas, de caracteres y de palabras 
    return 0;   
}