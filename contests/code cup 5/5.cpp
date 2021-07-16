#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=1e5+10;
const int Q=3e5+10;

int32_t main()
{

  int n, q;
  cin >> n >> q;

  int a[n+1];
  int b[n+1];
  bool alarm[n+2];
  fill(alarm, alarm+n+3, false);
  alarm[0] = true;
  alarm[n+1] = true;
  
  for (int i = 1; i <= n; i++){
    cin >> a[i];
  }

  for (int i = 1; i <= n; i++){
    cin >> b[i];
  }

  for (int i = 1; i <= q; i++){
    int t;
    cin >> t;
    for (int i = 1; i <= n; i++){
      a[i] += b[i];
    }
    if (t == 1){
      int l, r;
      cin >> l >> r;
      int sumK = 0;
      for (int i = l; i <= r; i++){
	sumK += a[i];
      }
      cout << sumK << endl;
    }
    else {
      int x; cin >> x;
      int i = x;
      int j = x;
      while (alarm[i] == false && alarm[j] == false){
	if (i == j){
	  a[i--] /= 2;
	  j++;
	  continue;
	}
	a[i--] /= 2;
	a[j++] /= 2;
      }
      alarm[x] = true;
    }
  }
  
  return 0;
}
