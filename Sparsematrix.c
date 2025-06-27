#include<stdio.h>
void check(int row, int col, int arr[row][col]){
    int i, j, k;
    int nonZero =0, zero =0;
    for(i = 0; i  < row; i++){
        for(j = 0; j < col; j++){
            if(arr[i][j] == 0){
                zero++;
            }
            else{
                nonZero++;
            }
        }
    }
    if(zero > nonZero){
        printf("It is a Sparse matrix");
    }
    else{
        printf("It is not a Sparse matrix");
    }
}
int main(){
    int arr [3][3] = {
        {1, 1, 1},
        {0, 1, 0},
        {0, 0, 1}
    };
    check(3, 3, arr);
    return 0;
}
