#include <iostream>
#include <iomanip>
using namespace std;
class Rectangle
{
    int len, width, s;
public:
    Rectangle() : len (0), width(0), s(0) {};
    Rectangle(int a, int b) {
        len = a;
        width = b;
        s = len * width;
    }
    friend ostream& operator<<(ostream& outputStream,
                               const Rectangle a);
    bool operator>(const Rectangle s);
    bool operator<(const Rectangle s);
    bool operator==(const Rectangle s);
    bool operator>=(const Rectangle s);
    bool operator<=(const Rectangle s);
};
ostream& operator<<(ostream& outputStream, const
                    Rectangle a)
{
    return outputStream << a.s;
}
bool Rectangle::operator>(const Rectangle s)
{
    if (this->s > s.s)
        return 1;
    return 0;
}
bool Rectangle::operator<(const Rectangle s)
{
    if (this->s < s.s)
        return 1;
    return 0;
}
bool Rectangle::operator==(const Rectangle s)
{
    if (this->s == s.s)
        return 1;
    return 0;
}
bool Rectangle::operator>=(const Rectangle s)
{
    if (this->s >= s.s)
        return 1;
    return 0;
}
bool Rectangle::operator<=(const Rectangle s)
{
    if (this->s <= s.s)
        return 1;
    return 0;
}
template <class T>
void sortbuble(T array[], int n)
{
    T t;
    int cnt;
    for(int i = 0; i < n; i++) {
        cnt = 0;
        for(int j = 0; j < n - 1; j++) {
            if(array[j] > array[j+1]) {
                t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
                cnt++;
            }
        }
        if(cnt == 0) {
            break;
        }
    }
    return;
}
int main(int argc, char **argv)
{
    int n = 4;
    Rectangle Exercise[n] = { {81,26}, {3, 8}, {
            2,
            5
        }, {3,200}, {48, 8},
    };
    sortbuble(Exercise, n);
    for(int i = 0; i < n; i++) {
        cout << Exercise[i] << " ";
    }
    return 0;
}
