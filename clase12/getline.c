#include <stdio.h>

#define MAXLINE 1000   //Tamaño máximo de la linea de entrada

int getline(char line[], int maxline);

int main(){

    //Definimos 
    int len;
    char line[MAXLINE];

    len = getline(line, MAXLINE);
    printf("--%s --Numero de Caracteres: %d", line, len);

}

int getline(char line[], int lim){
    int i, c;

    for(i = 0; i< lim - 1&&(c = getchar()) != EOF && c != '\n'; i++){
        line[i] = c;
    }

    if(c == '\n'){
        line[i] = c;
        i++;
    }

    line[i]= '\0';
    return i;
}
