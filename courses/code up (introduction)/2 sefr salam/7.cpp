#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++)
    ans += i;
  cout << ans*4+1 << endl;
  return 0;
}

