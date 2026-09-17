#ifndef TRACEBACK_H
#define TRACEBACK_H

void traceback(int n, int m, int max, char *seq1, char *seq2, int direction[n+1][m+1], char inv_result[3][max]);
#define gap_penalty -1
#define mismatch -1
#define match 1

#endif