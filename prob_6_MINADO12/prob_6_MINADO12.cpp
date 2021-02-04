#include <bits/stdc++.h>

int main() {

    int quantidadeMina[55] = {};
    int tabuleiroEspaco = 0;
    int minas[55] = {};

    scanf(" %d", &tabuleiroEspaco);

    for ( int c = 0; c < tabuleiroEspaco;c++ ) {
        scanf(" %d", &minas[c]);
    }

    for ( int d = 0; d < tabuleiroEspaco; d++ ) {
        
        if ( d == 0 ) {
            quantidadeMina[d] = minas[d] + minas[d + 1];
        }
        else if ( d == tabuleiroEspaco - 1 ) {
            quantidadeMina[d] = minas[d] + minas[d - 1];
        } 
        else quantidadeMina[d] = minas[d] + minas[d-1] + minas[d + 1];
    }

    for ( int i = 0; i < tabuleiroEspaco; i++ ) {
        printf("%d\n", quantidadeMina[i]);
    }
}