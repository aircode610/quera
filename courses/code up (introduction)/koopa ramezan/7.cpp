#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, T;
  cin >> T >> n;
  for (int i = 1; i <= T; i++){
    if (n % 2 == 0)
      n /= 2;
    else
      n = 3*n+1;
  }
  if (n == 1)
    cout << "Eyvaal" << endl;
  else
    cout << "Heiff" << endl;
  return 0;
}
