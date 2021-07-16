#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int q; cin >> q;
  while (q--){
    int l, r;
    cin >> l >> r;
    int s1 = sqrt(l), s2 = sqrt(r);
    int ans = s2-s1;
    //cout << s1 << ' ' << s2 << endl;
    //cout << ans << endl;
    if (s1*s1 == l)
      ans++;
    cout << ans << endl;
  }
  return 0;
}
