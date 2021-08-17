#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

/**
 * Write a function that accepts two square matrices (N x N two dimensional arrays), and return the sum of the two. 
 * Both matrices being passed into the function will be of size N x N (square), containing only integers.
 * How to sum two matrices:
 * Take each cell [n][m] from the first matrix, and add it with the same [n][m] cell from the second matrix. This will be cell [n][m] of the solution matrix.
 * Visualization: 
 |1 2 3|     |2 2 1|     |1+2 2+2 3+1|     |3 4 4|
 |3 2 1|  +  |3 2 3|  =  |3+3 2+2 1+3|  =  |6 4 4|
 |1 1 1|     |1 1 3|     |1+1 1+1 1+3|     |2 2 4|
 */
 
 /**
 * Task name: Matrix Addition
 * @param a
 * @param b
 * @return
 */
std::vector<std::vector<int> > matrixAddition(std::vector<std::vector<int> > &a,std::vector<std::vector<int> > &b){
    const int Size = a.size();
    std::vector<std::vector<int>> Matrix(Size, std::vector<int>(Size));
    for (size_t i = 0; i < Size; ++i){
        for (size_t j = 0; j < Size; ++j){
            Matrix[i][j] = a[i][j] + b[i][j];
        }
    }
    return Matrix;
}
