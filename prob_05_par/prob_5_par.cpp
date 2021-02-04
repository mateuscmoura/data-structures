#include <bits/stdc++.h>

int main() {

    int num_partidas;
    int t = 0;

    do {    
        scanf("%d", &num_partidas);

        t++;
        char jogador_1[11] = {};
        char jogador_2[11] = {};

        if (num_partidas != 0) {

            scanf("%s", jogador_1);
            scanf("%s", jogador_2);
            printf("Teste %d\n", t);

        }
    
        for(int c = 0; c < num_partidas; c++) {

            int dedos_j1 = 0;
            int dedos_j2 = 0;

            scanf("%d %d", &dedos_j1, &dedos_j2);

            if((dedos_j1 + dedos_j2) % 2 == 0) {

                printf("%s\n", jogador_1);

            } 
            else printf("%s\n", jogador_2);
        }
    } while (num_partidas != 0);
}