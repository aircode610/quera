#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int ans = 0, day = 2;
  while (n != 0){
    if (day % m == 1)
      n++;
    n--;    
    ans++;
    day++;
  }
  cout << ans << endl;
  return 0;
}
