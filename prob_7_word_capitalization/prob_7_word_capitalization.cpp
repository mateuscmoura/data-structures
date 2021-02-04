#include <bits/stdc++.h>

char palavra[1001] = {};

char capitalization(char letra) {
    if ( letra >= 97 && letra <= 122 ) {
        letra = letra - 32;        
    }
    return letra;
}

int main() {

    printf("Teste");
    scanf(" %s", palavra);
    palavra[0] = capitalization( palavra[0] );
    printf("%s", palavra);
}