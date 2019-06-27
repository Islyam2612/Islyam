#include <iostream>
using namespace std;
template <typename T1, typename T2> class DoubleBox
{
    T1 ch1;
    T2 ch2;
public:
    DoubleBox(): ch1(0), ch2(0) {};
    DoubleBox(const T1 value1, const T2
              value2):ch1(value1), ch2(value2) {};
    T1 get1() const;
    T2 get2() const;
    void get() const;
    void set(const T1 value1, const T2 value2);
};
template <typename T1, typename T2> void
DoubleBox<T1, T2>::get() const
{
    cout << ch1 << endl << ch2 << endl;
}
template <typename T1, typename T2> T1 DoubleBox<T1,
         T2>::get1() const
{
    return ch1;
}
template <typename T1, typename T2> T2 DoubleBox<T1,
         T2>::get2() const
{
    return ch2;
}
template <typename T1, typename T2> void
DoubleBox<T1, T2>::set(const T1 value1, const T2 value2)
{
    ch1 = value1;
    ch2 = value2;
}
int main(int argc, char **argv)
{
    DoubleBox<int, double> doubleM(3,12.2233);
    cout << doubleM.get1() << endl;
    cout << doubleM.get2() << endl;
    doubleM.set(4, 4.34675);
    cout << doubleM.get1() << endl;
    cout << doubleM.get2() << endl;
    doubleM.get();
    return 0;
}
