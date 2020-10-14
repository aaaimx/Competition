#include <iostream>
using namespace std;
int main() {
  
  cout << "Valor de N: ";
  unsigned int n;
  cin >> n;
  unsigned int sum = n * (n + 1) / 2;
  cout << "La suma es " << sum << '\n';
  return 0;
}
