#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int a, b;
  cin >> a >> b;
  int t = a+b;
  if (t % 5 == 0)
    cout << 1 << endl;
  else if (t % 5 == 4)
    cout << 2 << endl;
  else if (t % 5 == 3)
    cout << 3 << endl;
  else if (t % 5 == 2)
    cout << 4 << endl;
  else
    cout << 5 << endl;
  return 0;
}

