    #include <iostream>
    #include <cctype>
    #include "modBetaCipher.h"
    #include <locale>
    using namespace std;
    bool isValid(const string& s)
    {
    for(auto c:s)
    if (!isalpha(c) || !isupper(c))
    return false;
    return true;
    }
    int main(int argc, char **argv)
    {
    string key;
    string input;
    unsigned op;
    cout«"Cipher ready. Input Password: ";
    cin»key;
    int num = stoi(key);
    try {
    Shifrovshik shifr(num);
    do {
    cout«"Cipher ready. Input operation (0-exit, 1-
    encrypt, 2-decrypt): ";
    cin»op;
    if (op > 2) {
    cout«"Illegal operation\
    n"; } else if (op >0) {
    cout«"Cipher ready. Input text: ";
    cin»input;
    if (isValid(input)) {
    if (op==1) {
    "«shifr.Shifr(shifr, input)«endl;
    } else {
    "«shifr.Rasshifr(shifr, input)«endl;
    }
    } else {
    cout«"Encrypted text:
    cout«"Decrypted text:
    cout«"Operation aborted: invalid text\
    n"; }
    }
    } while (op!=0);
    } catch(const cipher_error& e) {
    cerr « "Error: " « e.what() «
    endl; }
    return 0;
    }

