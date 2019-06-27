#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    string d = "deb http://mirror.mephi.ru/debian/ stretch main contrib non-free deb-src http://mirror.mephi.ru/debian/ stretch main contrib non-free deb http://security.debian.org/ stretch/updates main contrib non-free deb-src http://security.debian.org/ stretch/updates main contrib non-free deb http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free deb-src http://mirror.mephi.ru/debian/ stretch-updates main contrib non-free deb http://mirror.mephi.ru/debian stretch-backports main contrib non-free deb-src http://mirror.mephi.ru/debian stretch-backports main contrib non-free";
    string m;
    string y;
    cout << "Введите слово которое хотите заменять"<<endl;
    cin>>m;
    cout << "Введите слово на которое хотите заменять"<<endl;
    cin>>y;
    for (int i = 0; i < d.length(); i++) {
        if (d.substr(i, m.length()) == m)
            d.replace(i, m.length(), y);
    }
    cout << d << endl;
    return 0;
}
