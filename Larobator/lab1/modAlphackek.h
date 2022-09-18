#pragma once
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <cctype>
#include <locale>
#include <codecvt>
class modAlphakek
{
private:
    int key1; // кол-во столбцов
public:
    modAlphakek()=delete; // запрет конструктора без параметров
    modAlphakek(const int& key) :key1(key) {};
 std::wstring encrypt(const std::wstring& open_text); // зашифрование
 std::wstring decrypt(const std::wstring& cipher_text); // расшифрование
};
