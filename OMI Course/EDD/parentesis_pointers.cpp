#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<char> s;
    char w[100];
    cin.getline(w, 100);
    char *i = w;
    while(&i) {
        if (*i == '(') s.push(*i); 
        else {
           if (s.empty()) {
               cout << "NO" << "\n";
               return 0;
           }
           s.pop(); 
        }
        *i++;
    }
    if (s.empty()) cout << "SI" << "\n";
    else cout << "NO" << "\n";
  return 0;
}