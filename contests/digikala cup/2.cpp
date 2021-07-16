#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {

  int n, s, f, u, d;
  cin >> n >> s >> f >> u >> d;

  bool con = false;
  int cur = s;
  int count = 0;
  if (s < f){
    if (u != 0){
      while (cur != f && cur <= n && cur > 0){
	if ((f-cur) % u == 0){
	  cout << count + (f-cur)/u << endl;
	  con = true;
	  break;
	}
	else {
	  count += 2;
	  cur += u-d;
	}
      }
    }
  }
  else if (s > f){
    if (d != 0){
      while (cur != f && cur <= n && cur > 0){
	if ((cur-f) % d == 0){
	  cout << count + (cur-f)/d << endl;
	  con = true;
	  break;
	}
	else {
	  count += 2;
	  cur += u-d;
	}
      }
    }
  }
  else {
    cout << 0 << endl;
  }

  if (con == false)
    cout << "Impossible" << endl;
  
  return 0;
}
