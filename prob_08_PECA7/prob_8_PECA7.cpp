#include <bits/stdc++.h>

int main() {

    int quantNuns = 0; 
    int listNuns = 0;
    int sub = 0;

    scanf("%d", &quantNuns);

    for ( int i = 1; i <= quantNuns; i++ ) {        
        sub = sub + i;
    }

    int numFaltando = sub;

    for ( int j = 1; j <= quantNuns - 1; j++ ) {
        scanf("%d", &listNuns);
        numFaltando = numFaltando - listNuns;    
    }

    printf("%1d", numFaltando);
}