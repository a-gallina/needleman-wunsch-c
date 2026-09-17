#ifndef MATRIX_H
#define MATRIX_H

void scoring(int n, int m, char *seq1, char *seq2, int matrix[n+1][m+1], int direction[n+1][m+1]);
#define gap_penalty -1
#define mismatch -1
#define match 1

#endif