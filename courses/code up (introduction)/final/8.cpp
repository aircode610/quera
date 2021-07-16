#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  int ans=0, jib=0;
  for (int i = 1; i <= n; i++){
    int inp; cin >> inp;
    if (inp < 0){
      int x = -1*inp;
      if (x <= jib)
	jib -= x;
      else{
	ans += x-jib;
	jib = 0;
      }
    }
    else
      jib += inp;
  }
  cout << ans << endl;
  return 0;
}
