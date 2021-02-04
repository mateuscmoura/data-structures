#include <bits/stdc++.h>

int main() {

    int n;

    scanf("%d",&n);

    int answer = 0;

    for(int i = 1 ; i <= n ; i++) {
        int petya, vasya, tonya;
        scanf("%d %d %d",&petya,&vasya,&tonya);

        if( petya + vasya + tonya >= 2 )
            answer++;
    }

    printf("%d\n",answer);
}