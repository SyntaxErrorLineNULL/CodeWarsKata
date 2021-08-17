#include <iostream>
#include <vector>
using namespace std;

int SumOfMinimums(const std::vector<std::vector<int>>& numbers){

	int SumArrayElement = 0;
	int *MinArrayElement = new int;

	MinArrayElement[numbers.size()];
	for (int i = 0; i < numbers.size(); i++) {
		MinArrayElement[i] = numbers[i][0];
		for (int j = 0; j < numbers[i].size(); j++) {
			if(MinArrayElement[i] > numbers[i][j]) {
				MinArrayElement[i] = numbers[i][j];
			}
		}
	}

	for (int q = 0; q < numbers.size(); q++) {
		SumArrayElement += MinArrayElement[q];
	}
	cout << SumArrayElement << endl;
	return SumArrayElement;
}

int main() {

	std::vector<vector<int>> test = {{11,12,14,54}, {67,89,90,56}, {7,9,4,3}, {9,8,6,7}};
	SumOfMinimums(test);
	system("pause");
	return 0;
}