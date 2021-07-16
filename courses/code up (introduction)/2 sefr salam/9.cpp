#include <bits/stdc++.h>
#define int long long

using namespace std;

int r, y, g;

int32_t main() {  
  string stat;
  cin >> stat;
  for (int i = 0; i < stat.size(); i++){
    if (stat[i] == 'R')
      r++;
    else if (stat[i] == 'Y')
      y++;
    else
      g++;
  }
  if (r >= 3){
    cout << "Coronaz dare :(" << endl;
    return 0;
  }
  else if (r >= 2 && y >= 2)
    cout << "Coronaz dare :(" << endl;
  else if (g == 0)
    cout << "Coronaz dare :(" << endl;
  else
    cout << "Akheish saleme :)" << endl;
  return 0;
}

