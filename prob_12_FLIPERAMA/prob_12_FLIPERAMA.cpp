#include <bits/stdc++.h>
#include <string.h>

const int MAXN = 10010; 
int bestRanking[MAXN];
int r[MAXN];
int gameVisible = 0;
int gamePlayned = 0;

void selection_sort(int lista[]) {
    
    int minimo = 0;
    int aux = 0;
    
    for ( int j = 0; j < gamePlayned; j++ ) {
        minimo = j;
        for ( int i = j + 1; i < gamePlayned; i++ ) {
            if ( lista[minimo] < lista[i] ) {
                minimo = i;
            }
        }
        if ( j != minimo ) {
            aux = lista[j];
            lista[j] = lista[minimo];
            lista[minimo] = aux;
        }
    }    
}

int main() {

    scanf("%d %d", &gamePlayned, &gameVisible);

    for ( int i = 0; i < gamePlayned; i++ ) {
        scanf("%d", &bestRanking[i]);
    }

    selection_sort(bestRanking);

    for ( int i = 0; i < gameVisible; i++ ) {
        printf("%d ", bestRanking[i]);
    }
}