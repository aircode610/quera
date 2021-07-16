#include<bits/stdc++.h>
using namespace std;
#define int long long

const int M=1e5+10;

int32_t main()
{

  int sumTeam = 0;

  for (int i = 1; i <= 3; i++){
    int a, b; cin >> a >> b;
    sumTeam += min(a, b);
  }

  cout << sumTeam << endl;
  
  return 0;
}
