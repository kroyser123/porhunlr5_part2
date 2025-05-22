#include "ascii_utils.h"

bool ValidateCharInput(const std::string& input) {
    return input.length() == 1;  // true, если введён ровно 1 символ
}

char GetPreviousChar(char ch) {
    return ch - 1;  // Предыдущий символ в ASCII
}

char GetNextChar(char ch) {
    return ch + 1;  // Следующий символ в ASCII
}