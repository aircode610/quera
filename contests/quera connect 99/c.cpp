#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 100+10;
int n, y, x, a[M];

int32_t main(){
  cin >> n;
  cin >> y >> x;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  a[0] = 0;
  sort(a+1, a+n+1);
  int energy = 0;
  for (int i = n; i > 1; i--){
    energy += 100-a[i];
  }
  if (energy % x == 0)
    energy /= x;
  else
    energy = energy/x+1;
  int have = a[1]/y;
  //cout << energy << ' ' << have << endl;
  if (energy <= have)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
