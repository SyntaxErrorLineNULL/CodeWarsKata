#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>

std::vector<std::vector<int>> multiplication_table(int n){
    std::vector<std::vector<int>> Matrix;

    for(int i = 1; i <= n; i++){ // rows
        std::vector<int> Tmp;
        for(int j = 1; j <= n; j++){ // cols
            Tmp.push_back(j * i);
        }
        Matrix.push_back(Tmp);
    }

    for (const auto &v : Matrix){
        for (int x : v ) std::cout << std::setw( 2 ) << x << ' ';
        std::cout << std::endl;
    }

    return Matrix;
}