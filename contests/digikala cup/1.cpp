#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  int n; cin >> n;
  while (n/10 != 0){
    int temp = n;
    int sum = 0;
    while (temp != 0){
      sum += temp % 10;
      temp /= 10;
    }
    n = sum;
  }

  cout << n << endl;
  
  return 0;
}
