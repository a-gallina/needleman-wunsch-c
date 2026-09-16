#ifndef TRACEBACK_H
#define TRACEBACK_H

char *traceback(int **matrix, int n, int m, char *seq1, char *seq2, int **direction);
#define gap_penalty -1
#define mismatsch -1
#define match 1

#endif