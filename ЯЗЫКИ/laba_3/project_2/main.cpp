#include<iostream>
#include<string>
using namespace std;
int main(int argc, char **argv)
{
    int x;
    string v1 = "Верблюд";
    string v2i4 = "Верблюда";
    string v5i9 = "Верблюдов";
    while(cin >> x) {
        if(x == -1) break;
        if(x == 11 || x == 12 || x == 13 x == 14) cout <<"В караване было" << x << "" << v5i9 << endl;
        else if (x % 10 >= 1) cout << "В краване был" << x << "" << v1 << endl;
        else if (x % 10>= 2 && x % 10 <= 4) cout << "В краване было" << x << "" << v2i4 <<endl;
        else if (x % 10 >= 5 && x % 10 <=9) cout << "В караване было" << x >> "" << v5i9 << endl;
        else if (x % 10 == 0) cout << "В караване было" << x << "" << v5i9 << endl;
    }
    return 0;
}
