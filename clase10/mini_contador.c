#include <stdio.h>

int main(){

    int c, nwhite, ndigit, nother, ndot, ncomma;
    nwhite = ndigit = nother = ndot = ncomma = 0;

    while((c = getchar()) != EOF){
        if( c == '\t' || c == '\n' || c == ' '){
            ++nwhite;
        }
        else if(c>='0' && c<='9'){     //( c=='0' || c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9') equivale a hacer esto
            ++ndigit;
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
    printf("Numero de caracteres ndigit: %d\n" ,ndigit);
    printf("Numero de caracteres nother: %d\n" ,nother);
    printf("Numero de caracteres ndot: %d\n" ,ndot);
    printf("Numero de caracteres ncomma: %d\n" ,ncomma);
    return 0;
}