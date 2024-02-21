#pragma once
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
/** @file
 * @author Асаян А.В.
 * @version 1.1.01
 * @date 21.02.2024
 * @copyright ИБСТ ПГУ
 * @warning 4 лабораторная
 * @brief Метод маршрутной перестановки
 */
 
 
/** @brief Класс, реализующий шифрование методом табличной маршрутной перестановки.
 * @details Ключ устанавливается в конструкторе.
 * Для зашифровывания и расшифровывания предназначены методы Encrypt и Decrypt.
 * @warning Реализация только для английского языка.
 */
class Methods {
    int key_;
public:
    /** @brief Запрет конструктора без параметров.
    */
    Methods() = delete;
    /** @brief Конструктор для установки ключа.
     * @param key Ключ. Должен быть целочисленным числом.
     */
    Methods(const int key);
    /** @brief Зашифрование.
     * @param str Текст на английском языке. Может содержать цифры и буквы верхнего регистра.
     * @warning Текст не должен быть пустой строкой, не должен содержать пробелы, символы пунктуации и буквы нижнего регистра.
     * @return Зашифрованный текст
     */
    string Encrypt(string str);
    /** @brief Расшифрование.
     * @param str Текст на английском языке. Может содержать цифры и буквы верхнего регистра.
     * @warning Зашифрованный текст не должен быть пустой строкой, не должен содержать пробелы, символы пунктуации и буквы нижнего регистра.
     * @return Расшифрованный текст
     */
    string Decrypt(string str);
};
/** @brief Класс обработки ошибок, наследуемый от invalid_argument.
 */
class Mymethods_error : public invalid_argument {
public:
    /** @brief Явный конструктор для возбуждения исключения.
     * @param error_msg Строка,которая должна содержать информацию о типе ошибки и саму ошибку.
     */
    explicit Mymethods_error(const string& error_msg) :
        invalid_argument(error_msg) {}
};
