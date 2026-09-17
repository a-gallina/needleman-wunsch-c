#include "traceback.h"

void traceback(int n, int m, int max, char *seq1, char *seq2, int direction[n+1][m+1], char result[3][max]){

    int row = n;
    int col = m;

    for(int i = 0; i < max; i++){
        if(direction[row][col] == 1){//diag
            result[0][max - 1 -i] = seq1[row - 1];
            result[1][max - 1 -i] = '|';
            result[2][max - 1 -i] = seq2[col - 1];

            col--;
            row--;
        }
        else if (direction[row][col] == 2){ //up
            result[0][max - 1 -i] = seq1[row - 1];
            result[1][max - 1 -i] = ' ';
            result[2][max - 1 -i] = '-';
            
            row--;
        }
        else {//left
            result[0][max - 1 -i] = '-';
            result[1][max - 1 -i] = ' ';
            result[2][max - 1 -i] = seq2[col - 1];
            
            col--;
        } 
    }
}
