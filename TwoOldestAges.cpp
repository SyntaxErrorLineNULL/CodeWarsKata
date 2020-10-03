#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

/**
 * The two oldest ages function/method needs to be completed. 
 * It should take an array of numbers as its argument and return the two highest numbers within the array. 
 * The returned value should be an array in the format [second oldest age, oldest age].
 * The order of the numbers passed in could be any order. The array will always include at least 2 items
 */
 
 /**
 * Task name: Two Oldest Ages
 * @param ages
 * @return
 */
std::vector<int> two_oldest_ages(std::vector<int>& ages){
    partial_sort(ages.begin(), ages.begin() + 2, ages.end(), greater<int>());
    vector<int> Result {ages[1], ages[0]};

    for(auto &i : Result)
        cout << i;

    return Result;
}
