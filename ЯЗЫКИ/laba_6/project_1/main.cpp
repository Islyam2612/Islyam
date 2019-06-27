#include <iostream>
using namespace std;
template <class T>
void sort(T array[], int n)
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
int main()
{
    int a[100], N, i, K;
    double b[100], M;
    char c[100];
    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a, N);
    for(i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cin >> M;
    for(i = 0; i < M; i++) {
        cin >> b[i];
    }
    sort(b, M);
    for(i = 0; i < M; i++) {
        cout << b[i] << " ";
    }
    cin >> K;
    for(i = 0; i < K; i++) {
        cin >> c[i];
    }
    sort(c, K);
    for(i = 0; i < K; i++) {
        cout << c[i];
    }
    return 0;
}
