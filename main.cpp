#include <cctype>
#include "modAlphaCipher.h"
using namespace std;
int main(int argc, char **argv)
{
locale loc("ru_RU.UTF-8");
locale::global(loc);
wstring key;
wstring text;
unsigned op;
wcout«"Cipher ready. Input key: ";
wcin » key;
try {
modAlphaCipher cipher(key);
do {
wcout«"Cipher ready. Input operation (0-exit, 1-
encrypt, 2-decrypt): ";
wcin » op;
wcin.get();
if (op > 2) {
wcout«"Illegal operation\
n"; } else if (op > 0) {
wcout«L"Cipher ready. Input text: ";
wcin»text;
if (op==1) {
"«cipher.encrypt(text)«endl;
} else {
"«cipher.decrypt(text)«endl;
}
}
wcout«L"Encrypted text:
wcout«"Decrypted text:
} while (op!=0);
} catch(const cipher_error& e) {
cerr « "Error: " « e.what() «
endl; }
return 0;
}


