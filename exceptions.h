#include <regex>
namespace wordExceptions {
std::exception isWord(std::string word) {
    for (int i = 0; i < word.length(); i++) {
        std::regex characters("^[a-zA-Z]+$");
        if (!std::regex_match(word, characters))
            throw "Error: Word should contain only A to Z characters";
    }
}
}  // namespace wordExceptions