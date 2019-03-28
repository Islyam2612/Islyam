#include <iostream>
using namespace std;

int main(int argc,char** argv)
{
    double m[]= {17,23,22,32,33,97,56,44,62,83};
    double sum = 0;
    int kol = 0;
    for (double n : m) {
        sum = sum + n;
        kol = kol +1;
    }
    double S = sum/kol;
    cout<<S<<endl;
    return 0;
}

