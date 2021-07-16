#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;
  int ans = 0;
  for (int i = 0; i < n-1; i++){
    int ind = i+1;
    int cnt = 1;
    while (s[ind] == s[i] && cnt < 3){
      ind++;
      cnt++;
    }
    if (cnt == 3)
      ans++;
  }
  cout << ans << endl;
  return 0;
}
