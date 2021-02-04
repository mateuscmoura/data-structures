#include <bits/stdc++.h>
#include <string.h>

char low(char letter) {
    if (letter >= 65 && letter <= 90) letter = letter+32;
    return letter;
    }

void remover(char nome[110]) {    
    for (int i = 0; i < strlen(nome); i++) {
        if (nome[i] == 'a') {
            printf("");
        }
        else if (nome[i] == 'o') {
            printf("");
        }
        else if (nome[i] == 'y') {
            printf("");
        }
        else if (nome[i] == 'e') {
            printf("");
        }
        else if (nome[i] == 'u') {
            printf("");
        }
        else if (nome[i] == 'i') {
            printf("");
        }
        else printf(".%c", nome[i]);
    }
}

int main() {

    char nome[110] = {};
    char letter;

    scanf("%s", nome);
    for (int i = 0 ; i < strlen(nome); i++) {
        letter = nome[i]; 
        nome[i] = low(letter);
        
    }
    remover(nome);
}