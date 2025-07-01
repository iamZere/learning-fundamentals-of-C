// Una evolucion del mini contador que guarda la cantidad de veces que aparece cada dígito

#include <stdio.h>

int main(){

    int c, nwhite, nother, ndot, ncomma;
    int ndigit0, ndigit1, ndigit2, ndigit3, ndigit4, ndigit5, ndigit6, ndigit7, ndigit8, ndigit9;
    int ndigit[10];
    int i;

    i = nwhite = nother = ndot = ncomma = 0;
    //ndigit0 = ndigit1 = ndigit2 = ndigit3 =  ndigit4 = ndigit5 = ndigit6 = ndigit7 = ndigit8 = ndigit9 = 0;    
    for(i=0; i<10; ++i){
        ndigit[i]=0; //Inicializamos todas las posiciones del array a 0.
    }

    while((c = getchar()) != EOF){
        if( c == '\t' || c == '\n' || c == ' '){
            ++nwhite;
        }
        else if(c>='0' && c<='9'){   //( c=='0' || c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9') equivale a hacer esto
            ++ndigit[c-'0'];
        }
        
        else if(c = '.'){
            ++ndot;
        }
        
        else if(c = ','){
            ++ncomma;
        }
        else{
            ++nother;
        }
    }

    printf("Numero de caracteres nwhite: %d\n" ,nwhite);
    
    for (i=0;i<10;++i){
        printf("Numero de caracteres %i: %d\n", i, ndigit[i]);
        }        
    printf("Numero de caracteres nother: %d\n" ,nother);
    printf("Numero de caracteres ndot: %d\n" ,ndot);
    printf("Numero de caracteres ncomma: %d\n" ,ncomma);
    return 0;
}