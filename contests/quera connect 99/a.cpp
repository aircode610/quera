#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
  int x1, x2;
  cin >> x1 >> x2;
  if (x1 == x2){
    cout << "Saal Noo Mobarak!" << endl;
    return 0;
  }
  if (x1 > x2)
    for (int i = 1; i <= x1-x2; i++)
      cout << 'L';
  else
    for (int i = 1; i <= x2-x1; i++)
      cout << 'R';
  cout << endl;
  return 0;
}
