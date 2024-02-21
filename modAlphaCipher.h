    #pragma once 
    #include  <vector>
    #include <string>
    #include <map>
    #include <locale>
  
    using namespace std;
    /** @file
* @author Асаян А.В.
* @date 25.02.2024
*/
    class modAlphaCipher
    {
    private:
    wstring numAlpha;
    map <wchar_t,int> alphaNum; //ассоциативный массив "номер
    по символу"
    vector <int> key; //ключ
    vector<int> convert(const wstring& s); //преобразование
    строка-вектор
    wstring convert(const vector<int>& v); //преобразование
    вектор-строка
    public:
    modAlphaCipher()=delete; //запретим конструктор без
    параметров
    modAlphaCipher(const wstring& skey); //конструктор для
    установки ключа
    wstring encrypt(const wstring& open_text); //зашифрование
    wstring decrypt(const wstring&
    cipher_text);//расшифрование
    wstring getValidKey(const wstring & in);
    wstring getValidOpenText(const wstring & in);
    wstring getValidCipherText(const wstring & in);
    };
    class cipher_error: public std::invalid_argument
    {
    public:
    explicit cipher_error (const std::string& what_arg):
    invalid_argument(what_arg) {}
    explicit cipher_error (const char* what_arg):
    invalid_argument(what_arg) {}
    };
