#include <stdio.h>

int main(){

    int c,nl, nt, ns;
    nl=nt=ns=0; //Inicializamos los contadores a cero 

    while((c=getchar())!=EOF){
        if (c=='\n') ++nl; //Incrementamos el numero de lineas
        if (c=='\t')++nt;  //Incrementamos el numero de tabs
        if (c==' ')++ns;   //Incrementamos el numero de espacios
    }  

    printf("Numero de Lineas: %d\n",nl);
    printf("Numero de Tabuladores: %d\n",nt);
    printf("Numero de espacios: %d\n", ns);
    return 0;
}