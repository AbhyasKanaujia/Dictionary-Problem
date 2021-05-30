#include <bits/stdc++.h>

#include "exceptions.h"

namespace helperFunctions {
int factorial(int n) {
    return (n == 0) || (n == 1) ? 1 : n * factorial(n - 1);
}

void removeCharacter(std::string& word, char character) {
    word.erase(word.begin() + word.find(character));
}

std::string getAscendingWord(std::string& word) {
    sort(word.begin(), word.end());
}

void convertToLower(std::string& word) {
    transform(word.begin(), word.end(), word.begin(), ::tolower);
}

void validateInput(std::string word) {
    try {
        wordExceptions::isWord(word);
    } catch (char const* e) {
        std::cout << e;
    }
}
}  // namespace helperFunctions