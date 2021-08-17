#include <iostream>
#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
    if (snail_map.empty())
        return {};
    else if (snail_map.size() == 1)
        return snail_map[0];

    std::vector<int> Result;
    int FirstColumn = 0;
    int LastColumn = snail_map.size() - 1;
    int FirstRow = 0;
    int LastRow = snail_map.size() - 1;

    while (FirstColumn <= LastColumn && FirstRow <= LastRow) {
        for (int i = FirstColumn; i <= LastColumn; i++) Result.emplace_back(snail_map[FirstRow][i]);
        FirstRow++;

        for (int i = FirstRow; i <= LastRow; i++) Result.emplace_back(snail_map[i][LastColumn]);
        LastColumn--;

        for (int i = LastColumn; i >= FirstColumn; i--) Result.emplace_back(snail_map[LastRow][i]);
        LastRow--;

        for (int i = LastRow; i >= FirstRow; i--) Result.emplace_back(snail_map[i][FirstColumn]);
        FirstColumn++;
    }
    for(auto &i : Result)
        std::cout << i << " ";
    return Result;
}

int main() {

    std::vector<std::vector<int>> TestOne = {
            {1,2,3},
            {8,9,4},
            {7,6,5}
    };

    std::vector<std::vector<int>> TestTwo = {
            {1,2,3,4},
            {12,13,14,5},
            {11,16,15,6},
            {10,9,8,7}
    };

    snail(TestTwo);

    return 0;
}