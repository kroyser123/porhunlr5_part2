#include "CUTE/cute/cute.h"
#include "CUTE/cute/cute_runner.h"
#include "CUTE/cute/ide_listener.h"
#include "test.cpp"

using namespace cute;

// Тесты валидации ввода
void testValidateCharInput_SingleChar() {
    ASSERT(ValidateCharInput("a"));  // Корректный ввод
}

void testValidateCharInput_EmptyString() {
    ASSERT(!ValidateCharInput(""));  // Пустая строка
}

void testValidateCharInput_MultipleChars() {
    ASSERT(!ValidateCharInput("abc"));  // Несколько символов
}

// Тесты вычислений
void testGetPreviousChar() {
    ASSERT_EQUAL('A', GetPreviousChar('B'));  // Проверка предыдущего символа
}

void testGetNextChar() {
    ASSERT_EQUAL('B', GetNextChar('A'));  // Проверка следующего символа
}


int main() {
    suite testSuite;
    testSuite.push_back(CUTE(testValidateCharInput_SingleChar));
    testSuite.push_back(CUTE(testValidateCharInput_EmptyString));
    testSuite.push_back(CUTE(testValidateCharInput_MultipleChars));
    testSuite.push_back(CUTE(testGetPreviousChar));
    testSuite.push_back(CUTE(testGetNextChar));

    ide_listener<> listener;
    makeRunner(listener)(testSuite, "ASCII Utils Tests");
    return 0;
}