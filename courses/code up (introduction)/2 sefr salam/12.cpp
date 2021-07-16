#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int h, m, s;
  cin >> h >> m >> s;
  int all = h*60*60+m*60+s;
  int tahvil = 47248;
  if (tahvil-all > 20)
    cout << "Hala moonde negaran nabash" << endl;    
  else if (tahvil-all >= 0)
    cout << "Bodo zang bezan ta dir nashode" << endl;
  else
    cout << "Ey baba dir shod ke" << endl;
  return 0;
}
