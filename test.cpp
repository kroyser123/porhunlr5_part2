#include <iostream>
#include <string>

// Функция проверки ввода (ровно 1 символ)
bool ValidateCharInput(const std::string& input) {
    return input.length() == 1;
}

// Функция получения предыдущего символа
char GetPreviousChar(char ch) {
    return ch - 1;
}

// Функция получения следующего символа
char GetNextChar(char ch) {
    return ch + 1;
}

