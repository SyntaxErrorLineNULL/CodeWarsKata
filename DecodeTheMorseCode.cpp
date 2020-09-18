#include <iostream>
#include <string>
std::string decodeMorse(std::string morseCode) {
    std::string decoded;
    std::string word;
    for(auto i = 0; i <morseCode.size(); i++) {
        if(morseCode[i] == '.' || morseCode[i] == '-') word+=morseCode[i];
        else if(morseCode[i] == morseCode[i-1] && morseCode[i] == morseCode[i+1] && morseCode[i] == ' ' && morseCode[i+2] != morseCode[i] && i+2 < morseCode.size() && decoded.size()>0)
            decoded+=' ';
        else {decoded += MORSE_CODE[word]; word.clear();
        }
    }
    decoded += MORSE_CODE[word]; word.clear();
    return decoded;
}
