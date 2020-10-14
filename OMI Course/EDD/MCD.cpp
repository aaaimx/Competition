#include<iostream>
#include<algorithm>

using namespace std;

typedef unsigned long long int integer;

integer gcd(integer m, integer n) {
  while(m) {
    if(m < n) {
      swap(m, n);
    }
    m %= n;
  }
  return n;
}

int main() {
  integer max;
  while(cin >> max) {
    integer count = 0;
    for(integer m = 2; m <= max; ++m) {
      integer mm = m * m;
      for(integer n = 1 + (m % 2); n <= m; n += 2) {
        if(gcd(m, n) == 1) {
        integer nn = n * n;
        integer a = mm - nn;
        integer b = 2 * m * n;
        integer c = mm + nn;
        if(c <= max) {
          if((a * a + b * b) == (c * c)) {
            ++count;
          }
        } else if(n < 3) {
          goto next;
        }
      }
    }
    next:
    cout << count << '\n';
  }
  return 0;
  }
}
