#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int cnt = 1, ans = 1;
  for (int i = 1; i <= n; i++){
    if (i % 2 == 0){
      if (cnt == k)
	ans = i;
      cnt++;
    }
  }
  for (int i = 1; i <= n; i++){
    if (i % 2 == 1){
      if (cnt == k)
	ans = i;
      cnt++;
    }
  }
  cout << ans << endl;
  return 0;
}
