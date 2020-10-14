#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    const int N = 10;
    float a[N] = {1,2,3,4,5,6,7,8,9,10};
    // for(int i = 0; i < N; ++i) {
    // cin >> a[i];
    // }
    float *i = a;
    float *end = a + N;
    while(i < end) {
        cout << *i++ << '\n';
    }
    return 0;
}
