#ifndef ASCII_UTILS_H
#define ASCII_UTILS_H

#include <string>

// Проверка ввода (ровно 1 символ)
bool ValidateCharInput(const std::string& input);

// Вычисление предыдущего и следующего символов
char GetPreviousChar(char ch);
char GetNextChar(char ch);

#endif