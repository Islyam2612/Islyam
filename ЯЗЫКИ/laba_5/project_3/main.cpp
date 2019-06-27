#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    int r=0;
    double s=0;
    double a;
    ifstream fin;
    fin.open("file.txt");
    if(!fin.is_open()) {
        cout << "Файл не открывается!!!" << endl;
    } else {
        while(fin>>a) {
            r++;
            s+=a;
        }
        cout<< "Сумма чисел: " << s <<endl;
        cout<< "Всего чисел: " << r << endl;
        cout<< "Среднее арифметическое чисел: "<< s/r <<endl;
        fin.close();
    }
    return 0;
}