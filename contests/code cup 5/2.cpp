#include<bits/stdc++.h>
using namespace std;
#define int long long

const int M=1e5+10;

int32_t main()
{

  int sumCount = 0;
  int m, n, a, b;

  cin >> m;
  cin >> n;
  cin >> a;
  cin >> b;

  int minBoard = min(m, n);
  int maxEraser = max(a, b);

  if (minBoard % maxEraser == 0){
    cout << minBoard / maxEraser << endl;
  }
  else {
    cout << minBoard / maxEraser + 1 << endl;
  }
  
  return 0;
}
