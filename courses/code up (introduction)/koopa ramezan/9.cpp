#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  double z = 0.0, s=0.0;
  for (int i = 1; i <= n; i++){
    double w; cin >> w;
    if (w > z)
      z = w;
    s += w;
  }
  s -= z;
  if (z > s)
    cout << "shahzoolbia daram!" << endl;
  else if (z == s)
    cout << "fargh nadare" << endl;
  else
    cout << "saboktare:(" << endl;
  
  return 0;
}
