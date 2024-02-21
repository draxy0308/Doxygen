#include "modBetaCipher.h"
using namespace std;
Shifrovshik::Shifrovshik(const int kod)
{
this->p=getValidKey(kod);
}
string Shifrovshik::Shifr(Shifrovshik w, string& s)
{
string Vyvod;
int vysota;
int dlina=getValidOpenText(s).size();
if (s.size()%w.p!=0) {
vysota=s.size()/
w.p+1; } else {
vysota=s.size()/
w.p; }
char x[vysota][w.p];
int p=0;
for (int i=0; i< vysota; ++i)
{ for (int k=0; k<w.p; ++k) {
if (p<s.length())
{ x[i][k]=s[p];
++p;
} else
x[i][k]='
'; }
}
for (int i=0; i<w.p; ++i) {
for (int k=0; k<vysota; ++k)
{ Vyvod+=x[k][i];
}
}
return Vyvod;
}
string Shifrovshik::Rasshifr(Shifrovshik w, string& s)
{
string Vyvod;
int vysota;
if (s.size()%w.p!=0)
{ vysota=s.siz
e()/w.p+1;
} else
{ vysota=s.siz
e()/w.p;
}
char x[vysota][w.p];
int p=0;
for (int i=0; i<w.p; ++i) {
for (int k=0; k<vysota; ++k)
{ x[k][i]=s[p];
+
+p; }
}
for (int i=0; i<vysota; ++i)
{ for (int k=0; k<w.p; ++k)
{
Vyvod+=x[i]
[k]; }
}
return Vyvod;
}
inline int Shifrovshik::getValidKey(const int k)
{
if (k<=0)
throw cipher_error("Invalid key");
else
return k;
}
inline string Shifrovshik::getValidOpenText(const string& s)
{
string output;
for (auto c:s)
if ((int)c > 31 && (int)c < 127)
output.push_back(c);
if (output.empty())
throw cipher_error("Wrong Text");
return output;
}
inline string Shifrovshik::getValidCipherText(const string& s)
{
string output;
for (auto c:s)
if ((int)c > 31 && (int)c < 127)
output.push_back(c);
if (output.empty())
throw cipher_error("Wrong Cipher Text");
return output;
} 
