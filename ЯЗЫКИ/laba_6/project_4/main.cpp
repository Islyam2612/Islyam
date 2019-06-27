#include <iostream>
#include <string>
using namespace std;
template <typename T1, int ArrayLen> class Array
{
    T1 array[ArrayLen] = {};
public:
    Array() {};
    Array(const T1 ini) {
        for (int i = 0; i < ArrayLen; i++)
            array[i] = ini;
    }
    Array(const T1 *m, int size) {
        if (size == ArrayLen) {
            for (int i = 0; i < size; i++)
                array[i] = m[i];
        } else
            cout << "Error!" << endl;
    }
    T1 &operator[] (int index);
    T1 operator[](int index) const;
};
template <typename T1, int ArrayLen> T1 &Array<T1,
         ArrayLen>::operator[] (int index)
{
    if (index < 0 || index > ArrayLen) {
        cout << "Error!" << endl;
        exit(1);
    }
    return array[index];
}
template <typename T1, int ArrayLen> T1 Array<T1,
         ArrayLen>::operator[] (int index) const
{
    if (index < 0 || index > ArrayLen) {
        cout << "Error!" << endl;
        exit(1);
    }
    return array[index];
}
int main(int argc, char **argv)
{
    int M[5] = { 1, 2, 3, 4, 5 };
    Array<int, 5> b(M, 5);
    Array<int, 5> a(4);
    const Array<int, 3> c;
    cout << a[1] << endl;
    cout << b[3] << endl;
    b[3] = 31;
    cout << b[3] << endl;
    b[3] = c[1];
    cout << b[3] << endl;
    Array<string, 3> d("isya");
    cout << d[2] << endl;
    cout << c[2] << endl;
    return 0;
}
