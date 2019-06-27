#include <iostream>
#include <locale>
using namespace std;
wstring decrypt(const wstring text, const int key);
int main()
{
    locale loc("ru_RU.UTF-8");
    locale::global(loc);
    wstring wshifr = L"ИСЛЯМКРАСАВЧИК";
    wstring wshifr2 = L"", wdeshifr1 = L"";
    int key;
    wcout << L"Ключ: ";
    cin >> key;
    for (wchar_t & ws: wshifr) {
        if ((ws >= L'а' && ws <= L'я') || (ws >= L'А' && ws <= L'Я')) {
            ws = toupper(ws,loc);
            wshifr2 += ws;
        }
    }
    wdeshifr1 = decrypt(wshifr, key);
    wcout << wdeshifr1 << endl;
    return 0;
}
wstring decrypt(const wstring text, const int key)
{
    int key1;
    wstring text1 = text;
    wstring str;
    wstring error = L"ОШИБКА";
    for (unsigned i = 0; i < text1.length(); i++)
        if (text1[i] >= L'А' && text1[i] <= L'Я')
            continue;
        else
            return error;
    if (key > 32) key1 = key % 32;
    else key1 = key;
    for (wchar_t & wc: text1) {
        if ((wc - key1) < L'А')
            str += wc - key1 + 32;
        else
            str += wc - key1;
    }
    return str;
}
