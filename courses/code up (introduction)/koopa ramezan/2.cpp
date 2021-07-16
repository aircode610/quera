#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  cout << 'H';
  for (int i = 1; i <= 2*x; i++)
    cout << 'o';
  cout << 'r';
  for (int i = 1; i <= y; i++)
    cout << 'a';
  cout << '!' << endl;
  return 0;
}
