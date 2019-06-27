#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i[10];
    for (int v=0; v<10 ; v++) {
        cin >> i[v];
        cout << setw(5) << oct << i[v] << setw(5) << dec << i[v] << setw(5) << hex << i[v] <<endl;
    }
    return 0;
}