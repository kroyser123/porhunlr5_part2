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

int main() {
    std::string input;
    
    // Ввод символа с проверкой
    std::cout << "Введите символ: ";
    std::getline(std::cin, input);
    
    while (!ValidateCharInput(input)) {
        std::cout << "Ошибка! Введите ровно один символ: ";
        std::getline(std::cin, input);
    }
    
    char ch = input[0];
    
    // Вывод результатов
    std::cout << "Предыдущий символ: " << GetPreviousChar(ch) << std::endl;
    std::cout << "Следующий символ: " << GetNextChar(ch) << std::endl;
    
    return 0;
}