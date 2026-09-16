#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrix.h"
#include "traceback.h"

#define gap_penalty -1
#define mismatsch -1
#define match 1

int main(){

    //char seq1[] = "ATGCGTACGTAGCTCAGCTAGCGATCGTAC";
//char seq2[] = "ATGCGTCCGTAGCTACGCAGCGATCGCAT";

char seq1[] = "AGACT";
char seq2[] = "AGCT";

int n = strlen(seq1);
int m = strlen(seq2);

int matrix[n][m];

int **direction = scoring(n, m, seq1, seq2, matrix);

char inv_result[] = traceback(matrix, n, m, seq1,seq2, direction);

return 0;

}
