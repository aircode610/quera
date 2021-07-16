#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  while (a >= 10){
    int s = 0, tmp = a;
    while (tmp != 0){
      s += tmp%10;
      tmp /= 10;
    }
    a = s;
  }
  while (b >= 10){
    int s = 0, tmp = b;
    while (tmp != 0){
      s += tmp%10;
      tmp /= 10;
    }
    b = s;
  }
  while (c >= 10){
    int s = 0, tmp = c;
    while (tmp != 0){
      s += tmp%10;
      tmp /= 10;
    }
    c = s;
  }
  if (a == b)
    cout << 3 << endl;
  else if (b == c)
    cout << 1 << endl;
  else
    cout << 2 << endl;
  return 0;
}
