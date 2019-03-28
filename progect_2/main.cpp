#include <iostream>
using namespace std;

int main()
{
    int k;
    bool Flag;
    int a;
    cin >> k;
    do{
        cin >> a;
        if (k==a) {
            
            Flag = true;
            break;
        }
    } while (a!=0);
    if (Flag) {
        cout << "Найдено k" << endl;
    } else {
        cout << "Не найдено" << endl;
    }
    
    return 0;
} 
