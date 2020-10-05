#include <iostream>
using namespace std;

int main() {
 string word;
 cin >> word;
 int j = word.length() - 1;
 int middle, i;
 for(i = 0, middle = j / 2; word[i] == word[j]; ++i, j--) {
    if(middle == i){
    cout << "Es palindromo";
    break;
  }
 }
 if(middle != i)
 cout << "No es palindromo";
 return 0;
}