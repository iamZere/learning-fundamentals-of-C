#include <stdio.h>

int main(){

    int c;

    c= getchar(); 

    while(c != EOF){
        printf("%c",c);
        c = getchar();
    }

    return 0;
}