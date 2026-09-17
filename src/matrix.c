#include "matrix.h"

#define gap_penalty -1
#define mismatch -1
#define match 1

void scoring(int n, int m, char *seq1, char *seq2, int matrix[n+1][m+1], int direction[n+1][m+1]){
    
    matrix[0][0] = 0;

    for(int i = 0; i < n + 1; i++){
        matrix[0][i] = i * gap_penalty;
    }

    for(int j = 0; j < m + 1; j++){
        matrix[j][0] = j * gap_penalty;
    }

    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < m + 1; j++){
            int score;

            int diag = matrix[i - 1][j - 1] ;
            if(seq1[i - 1] == seq2[j - 1])
                diag += match;
            else
                diag += mismatch;
            int up = matrix[i - 1][j] + gap_penalty;
            int left = matrix[i][j - 1] + gap_penalty;

            if(diag >= up && diag >=left){
                score = diag;
                direction[i][j] = 1;
            }
            else if(up > diag && up >=left){
                score = up;
                direction[i][j] = 2;
            }
            else{
                score = left;
                direction[i][j] = 3;
            }

            matrix[i][j] = score; 
        }
    }
    
}
