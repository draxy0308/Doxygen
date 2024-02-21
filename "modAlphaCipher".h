    ##pragma once
    #include <string>
    #include <vector>
    #include <iostream>
    using namespace std;
    /** @file
* @author Асаян А.В.
* @date 25.02.2024
*/
    class Shifrovshik
    {
    private:
    int p;
    public:
    Shifrovshik() = delete;
    Shifrovshik(int w);
    string Rasshifr(Shifrovshik w, string& s);
    string Shifr(Shifrovshik w, string& s);
    int getValidKey(const int k);
    string getValidOpenText(const string& s);
    string getValidCipherText(const string& s);
    };
    class cipher_error: public invalid_argument
    {
    public:
    explicit cipher_error (const std::string& what_arg):
    invalid_argument(what_arg) {}
    explicit cipher_error (const char* what_arg):
    invalid_argument(what_arg) {}
    };

