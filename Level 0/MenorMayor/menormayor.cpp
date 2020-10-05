#include <iostream>
using namespace std;
int main(){
    int a = 5, b = 1, c = 3;

    if (a > b && a > c) {
        cout << "A es el mayor";
        if (b < c)
            cout << "B es el menor";
        else
            cout << "C es el menor";
    } else if (b > a && b > c) {
        cout << "B es el mayor";
        cout << "A es el menor";
    } else {
        cout << "C es el mayor";
        cout << "A es el menor";
    }
    return 0;
}