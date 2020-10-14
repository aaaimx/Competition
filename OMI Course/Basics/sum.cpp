#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (1 <= n && n <=10000) {
        for(int i = 1; i <= n; ++i) {
            cout << i << endl;
        }
    }
    return 0;
}