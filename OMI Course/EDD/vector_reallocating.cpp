#include<iostream>
#include<vector>

int main() {
  using namespace std;
  vector< int > v;
  v.reserve(1000);
  cout
    << '\t'                 // aún no hay datos
    << v.size() << '\t'     // vector vacío
    << v.capacity() << '\n' // depende del implementador
  ;
  int i;
  while(cin >> i) {
    v.push_back(i);
    cout
      << i << '\t'            // dato
      << v.size() << '\t'     // tamaño actual
      << v.capacity() << '\n' // cómo y cuándo crece
    ;
  }
  return 0;
}