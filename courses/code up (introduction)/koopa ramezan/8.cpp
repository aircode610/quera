#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  for (int i = 1; i <= n; i++){
    int a; cin >> a;
    cout << a%7 + a%8 << endl;
  }
  return 0;
}
