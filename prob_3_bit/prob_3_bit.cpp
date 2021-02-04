#include <bits/stdc++.h>
#include <string.h>

int main() {

    int rep = 0;

    do {
        scanf("%d", &rep);
    } while (rep < 1 || rep > 150);

    int x = 0;
    int result;
    char operaction[10];
    char soma[] = "++X";
    char soma2[] = "X++";
    char sub[] = "--X";
    char sub2[] = "X--";

    for (int c = 0; c < rep; c++) {
        
        scanf("%s", operaction);
        result = strcmp(operaction, soma);
        if (result == 0) {
            x = x + 1;
        }

        result = strcmp(operaction, soma2);
        if (result == 0) {
            x = x + 1;
        }

        result = strcmp(operaction, sub);
        if (result == 0) {
            x = x - 1;
        }

        result = strcmp(operaction, sub2);
        if (result == 0) {
            x = x - 1;
        }
    }
    printf("%d", x);    
}

