#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  int zoj=0, fard=0, sz=0, sf=0, c=0, sign = 1;
  for (int i = 1; i <= n; i++){
    int inp; cin >> inp;
    if (i % 2 == 1)
      sz += inp;
    else
      sz -= inp;
    
    if (inp % 2 == 0)
      zoj++;
    else
      fard++;

    if (c == 0){
      sf = sf+sign*inp;
      c = 1;
      sign *= -1;
    }
    else
      c = 0;
  }
  if (zoj > 0 && fard == 0)
    cout << sz << endl;
  else if (fard > 0 && zoj == 0)
    cout << sf << endl;
  else
    cout << "bazi anjam nemishe" << endl;
  return 0;
}
