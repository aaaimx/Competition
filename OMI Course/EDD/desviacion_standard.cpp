#include<iostream>
#include<cmath>
#include<vector>

int main() {
  using namespace std;
  typedef long double real;
  vector< real > lst;
  real r, sum = 0;
  int count = 0;
  while(cin >> r) {
    lst.push_back(r);
    sum += r;
    ++count;
  }
  if(count) {
    real mean = sum / count;
    sum = 0;
    vector< real >::const_iterator i = lst.begin();
    while(i != lst.end()) {
      r = *i++ - mean;
      sum += r * r;
    }
    cout << sqrt(sum / count) << '\n';
  }
  return 0;
}