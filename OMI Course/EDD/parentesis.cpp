#include<iostream>
#include<string>
#include<stack>

int main() {
    using namespace std;
    stack< char > s;
    string w;
    cin >> w;
    for(auto&& p : w) {
        if (p == '(') s.push(p); 
        else {
           if (s.empty()) {
               cout << "NO" << endl;
               return 0;
           }
           s.pop(); 
        }
    }
    if (s.empty()) cout << "SI" << endl;
    else cout << "NO" << endl;
  return 0;
}