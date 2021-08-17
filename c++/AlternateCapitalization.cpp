#include <iostream>
#include <string.h>
#include <cctype>

std::pair<std::string, std::string> capitalizeOne(const std::string &s){
    std::string Even, Uneven;
    std::cout << Even << Uneven << std::endl;
    for(std::string::const_iterator i = s.begin(); i != s.end(); i++){
        Even.push_back(*i % 2 == 0 ? std::toupper(*i) : std::tolower(*i));
        Uneven.push_back(*i % 2 == 1 ? std::toupper(*i) : std::tolower(*i));
    }
    std::cout << Uneven << Even << std::endl;
    return {Uneven, Even};
}

std::pair<std::string, std::string> capitalizeTwo(const std::string &s){
    std::string Even, Uneven;
    for(unsigned iterator = 0; iterator != s.length(); iterator++){
        Even.push_back(iterator % 2 == 0 ? std::toupper(s[iterator]) : std::tolower(s[iterator]));
        Uneven.push_back(iterator % 2 == 1 ? std::toupper(s[iterator]) : std::tolower(s[iterator]));
    }
    std::cout << Even << Uneven << std::endl;
    return {Even, Uneven};
}
