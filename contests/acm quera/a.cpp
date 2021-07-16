#include <bits/stdc++.h>

using namespace std;

int main() {

  int w, p;
  cin >> w >> p;

  int all = 0;
  
  if (p + 60 >= w)
    all += w*1500;
  else
    all += (p+60)*1500 + (w-(p+60))*3000;

  cout << all << endl;
  
  return 0;
}
