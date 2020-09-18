#include <string>
#include <iostream>
#include <vector>
#include <set>

bool valid_braces(std::string s) {
    std::map<char,char> parent;
    parent[')'] = '(';
    parent[']'] = '[';
    parent['}'] = '{';
    std::stack<char> buffer;

    for(char charnow : s){
        if( !parent.count(charnow))
            buffer.push(charnow);
        else {
            char topelement = buffer.empty() ? '#' : buffer.top();
            buffer.pop();
            if( topelement != parent[charnow] )
                return false;
        }
    }
    return buffer.empty();
}