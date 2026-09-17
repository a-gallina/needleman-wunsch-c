#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrix.h"
#include "traceback.h"

#define gap_penalty -1
#define mismatch -1
#define match 1

int main(){

//char seq1[] = "ATGCGTACGTAGCTCAGCTAGCGATCGTAC";
//char seq2[] = "ATGCGTCCGTAGCTACGCAGCGATCGCAT";

char seq1[] = "AGACT";
char seq2[] = "AGCT";

int n = strlen(seq1);
int m = strlen(seq2);

int matrix[n+1][m+1];
int direction[n+1][m+1];

scoring(n, m, seq1, seq2, matrix, direction);

int max;
if(n > m) max = n;
else max = m;

char inv_result[3][max];

traceback(n, m, max, seq1, seq2, direction, inv_result);

//stampa risultato
for(int i = 0; i < 3; i++){
    for(int j = max - 1; j >= 0; j--){
        printf("%C", inv_result[i][j]);
    }
}

return 0;

}
