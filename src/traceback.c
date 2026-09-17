#include "traceback.h"

void traceback(int n, int m, int max, char *seq1, char *seq2, int direction[n+1][m+1], char inv_result[3][max]){

    int row = n;
    int col = m;

    int i = 0;

    while(col!=0 && row!= 0){
        if(direction[row][col] == 1){//diag
            inv_result[0][i] = seq1[col - 1];
            inv_result[1][i] = '|';
            inv_result[2][i] = seq2[col - 1];

            col--;
            row--;
        }
        else if (direction[row][col] == 2){ //up
            inv_result[0][i] = seq1[col - 1];
            inv_result[2][i] = '-';
            
            row--;
        }
        else {//left
            inv_result[0][i] = '-';
            inv_result[2][i] = seq2[col - 1];
            
            col--;
        } 

        i++;
    }
}
