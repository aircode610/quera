#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int ans = -1, s = 1;
  if (n == 1){
    if (k <= 9){
      cout << k << endl;
    }
    else
      cout << -1 << endl;
    return 0;
  }
  else if (k == 2){
    for (int i = 10; i <= 99; i++)
      if (i % k == 0)
	ans = i;
    cout << ans << endl;
    return 0;
  }
  else {
    cout << k;
    int dig = 1;
    if (k > 9)
      dig = 2;
    for (int i = 1; i <= n-dig; i++){
      cout << 0;
    }
    cout << endl;
  }
  return 0;
}
