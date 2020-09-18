#include <iostream>
#include <vector>
#include <string>
#include <numeric>

class PartList {
    public:
    static std::vector<std::pair <std::string, std::string>> partlist(std::vector<std::string> &arr){
        std::vector<std::pair<std::string, std::string>> Result;
        const auto JoinString = [](std::string a, std::string b) {return a + ' ' + b;};

        for (auto i = std::next(std::begin(arr)); i != std::end(arr); ++i){
            auto Left = std::accumulate(std::next(std::begin(arr)), i, *std::begin(arr), JoinString);
            auto Right = std::accumulate(std::next(i), std::end(arr), *i, JoinString);

            Result.emplace_back(Left, Right);
        }

        return Result;
    }
};

int main() {

    std::vector<std::string> s = {"cdIw", "tzIy", "xDu", "rThG"};
    std::vector<std::pair <std::string, std::string>> sol = {{"cdIw", "tzIy xDu rThG"}, {"cdIw tzIy", "xDu rThG"}, {"cdIw tzIy xDu", "rThG"}};

    s = {"I", "wish", "I", "hadn't", "come"};
    sol = {{"I", "wish I hadn't come"}, {"I wish", "I hadn't come"}, {"I wish I", "hadn't come"}, {"I wish I hadn't", "come"}};

    s = {"vJQ", "anj", "mQDq", "sOZ"};
    sol = {{"vJQ", "anj mQDq sOZ"}, {"vJQ anj", "mQDq sOZ"}, {"vJQ anj mQDq", "sOZ"}};

    PartList List;
    PartList::partlist(s);

    return 0;
}
