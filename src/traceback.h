#ifndef TRACEBACK_H
#define TRACEBACK_H

void traceback(int n, int m, char *seq1, char *seq2, int direction[n+1][m+1], int inv_result[n+1][m+1]);
#define gap_penalty -1
#define mismatsch -1
#define match 1

#endif