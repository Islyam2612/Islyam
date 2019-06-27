#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin_1;
    fin_1.open("file.bin",ios::binary);
    if(fin_1.is_open()) {
        cout << "Файл подтвержден" << endl;
        double r;
        int n = 0;
        while (fin_1.read((char*)&r, sizeof(r))) {
            n++;
        }
        fin_1.close();
        cout << "Всего чисел: " << n << endl;
        float * f = new float [n];
        ifstream fin_2;
        fin_2.open("file1.bin",ios::binary);
        fin_2.read((char*)f, sizeof(f));
        for (int i = 0; i < n; i++) {
            f[i]=1/f[i];
            cout << f[i] << endl;
        }
        fin_2.close();
        ofstream fout;
        fout.open("file1.bin",ios::binary);
        fout.write((char*)&f, sizeof(f));
        fout.close();
    } else {
        cout << "Ошибка!!!" <<endl;
    }
    return 0;
}