#include <iostream>

#include "helperFunctions.h"

int getWordPostion(std::string word) {
    helperFunctions::validateInput(word);
    int position = 0;

    //get ascending word
    std::string ascendingWord = word;
    helperFunctions::getAscendingWord(ascendingWord);

    for (int i = 0; i < word.length(); i++) {              // iterate actual word
        int first = 0;                                     // number of options for first position
        for (int j = 0; word[i] != ascendingWord[j]; j++)  // iterate dictionary order
            first++;

        int remainingPositions = word.length() - (i + 1);  // besides for first position
        position += (first * helperFunctions::factorial(remainingPositions));

        // remove character that have been used
        helperFunctions::removeCharacter(ascendingWord, word[i]);
    }

    return position + 1;
}

int main(int argc, char const* argv[]) {
    std::string word;
    std::cout << "Enter a word: ";
    std::cin >> word;
    // std::string word = "Tango"; // should give 99

    std::cout << getWordPostion(word);

    return 0;
}
