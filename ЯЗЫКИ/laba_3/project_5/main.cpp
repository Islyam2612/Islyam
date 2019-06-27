#include <iostream>
#include <locale>
using namespace std;
wstring encrypt(const wstring text, const int key);
int main()
{
    locale loc("ru_RU.UTF-8");
    locale::global(loc);
    wstring wshifr = L"ИСЛЯМЧИК КРАСАВЧИК";
    wstring wshifr2 = L"", w3shifr = L"";
    int key;
    wcout << L"Ключ: ";
    cin >> key;
    for (wchar_t & ws: wshifr) {
        if ((ws >= L'а' && ws <= L'я') || (ws >= L'А' && ws <= L'Я')) {
            ws = toupper(ws,loc);
            wshifr2 += ws;
        }
    }
    for (unsigned int i=0; i<wshifr2.length(); i++)
        if (wshifr2[i]>=L'А' && wshifr2[i]<=L'Я')
            continue;
        else {
            wcout << L"ОШИБКА\n";
            return 0;
        }
    if (wshifr2 == L"") {
        wcout << L"ОШИБКА\n";
        return 0;
    }
    wcout << wshifr2 << endl;
    w3shifr = encrypt(wshifr2, key);
    wcout << w3shifr << endl;
}
wstring encrypt(const wstring text, const int key)
{
    unsigned int key1;
    wstring text1 = text;
    wstring str;
    if (key > 32) key1 = key % 32;
    else key1 = key;
    for (wchar_t & ws: text1) {
        if ((ws + key1) > L'Я')
            str += ws + key1 - 32;
        else
            str += ws + key1;
    }
    return str;
}
