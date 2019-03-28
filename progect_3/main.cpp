#include <iostream>
using namespace std;
int main()
{
    int k;
    int s = 0;
    do {
        cin >> k;
        if (k>0) {
            s = s + k;
        }
    } while (k!=0);
    cout << s << endl;
    return 0;
} 
