#include <bits/stdc++.h>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  int steps = 0;
  if (x1 > x2)
    steps += x1-x2;
  else
    steps += x2-x1;
  if (y1 > y2)
    steps += y1-y2;
  else
    steps += y2-y1;
  cout << steps << endl;
  return 0;
}
