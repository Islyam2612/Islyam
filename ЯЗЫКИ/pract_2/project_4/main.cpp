#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

int RandomGenerator()
{
    static mt19937 rnd(50); //(uint64_t)&rnd);
    uniform_int_distribution<int>d(-1000000000, 1000000000);
    return d(rnd);
}

int main(int argc, char **argv)
{
    vector <int> v1;
    vector<int> v2(10000000);
    mt19937 rnd(50);
    uniform_int_distribution<int>roll(-1000000000, 1000000000);
    for (int i=0; i < 10000000; i++)
        v1.push_back(roll(rnd));
    generate(v2.begin(),v2.end(),RandomGenerator);
    vector<int> v3(v2);
    steady_clock::time_point tp1 = steady_clock::now();
    sort(v2.begin(),v2.end());
    steady_clock::time_point tp2 = steady_clock::now();
    duration<double> d = tp2 - tp1;
    cout << "sort: " << d.count() << endl;
    tp1 = steady_clock::now();
    stable_sort(v3.begin(),v3.end());
    tp2 = steady_clock::now();
    d = tp2 - tp1;
    cout << "stable_sort: " << d.count() << endl;
    return 0;
}
