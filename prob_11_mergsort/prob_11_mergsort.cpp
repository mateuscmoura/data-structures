#include <bits/stdc++.h>

const int MAXN = 100010;

int array[MAXN];
int n;

void merge ( int arrScrambled[MAXN], int left, int mid, int right) {

    int i = 0, j = 0, k = 0;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int Left[ n1 ], Right[ n2 ];

    for ( i = 0; i < n1; i++ ) {
        Left[ i ] = arrScrambled[ left + i ];
    }
    for ( int j = 0; j < n2; j++ ) {
        Right[ j ] = arrScrambled[ mid + 1 + j ];
    }

    i = 0; 
    j = 0;
    k = left;

    while ( i < n1 && j < n2 ) {
        if ( Left[ i ] <= Right[ j ] ) {
            arrScrambled[ k ] = Left[ i ];
            i++;
        }
        else {
            arrScrambled[ k ] = Right[ j ];
            j++;
        }
        k++;
    }
    while ( i < n1 ) {
        arrScrambled[ k ] = Left[ i ];
        i++;
        k++;
    }
    while ( j < n2 ) {
        arrScrambled[ k ] = Right[ j ];
        j++;
        k++;
    } 
}

void mergeSort( int arrOrganized[MAXN], int left, int right) {

    if ( left < right ) {
        int mid = left + ( right - left ) / 2;

        mergeSort(arrOrganized, left, mid);
        mergeSort(arrOrganized, mid + 1, right);

        merge(arrOrganized, left, mid, right);
    }
}

int main() {

    // int n = 0;

    // scanf("%d", &n);

    // for ( int contador = 0; contador < 6 ; contador++ ) {
    //     scanf("%d", &array[contador]);
    // }

    int value;
    

    while ( scanf("%d", &value) == 1) 
        array[++n] = value;
    
        
    mergeSort(array, 0, n);

    for ( int contador2 = 1; contador2 < n + 1; contador2++ ) {
        printf("%d ", array[contador2]);
    }

    return 0;
} 