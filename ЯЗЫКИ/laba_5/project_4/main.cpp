#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("file.txt");
    if(fin.is_open()) {
        cout << "Первый файл открыт" << endl;
    } else {
        cout << "Ошибка!!!" <<endl;
    }
    ofstream fout;
    fout.open("file1.txt",ios::app);
    if(fout.is_open()) {
        cout << "Второй файл открыт" << endl;
    } else {
        cout << "Ошибка!!!" <<endl;
    }
    string str;
    while(getline(fin, str)) {
        fout << str << endl;
        fin.close();
        fout.close();
    }
    return 0;
}
