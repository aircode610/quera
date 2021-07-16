#include <bits/stdc++.h>
#define int long long

using namespace std;

int cnt[10];

void clear() {
  fill(cnt, cnt+10, 0);
}

int32_t main(){
  int t;
  cin >> t;
  while (t--){
    bool con = false;
    int num;
    cin >> num;
    clear();
    int temp = num;
    for (int i = 1; i <= 8; i++){
      cnt[temp%10]++;
      if (cnt[temp%10] >= 4){
	con = true;
	break;
      }
      temp /= 10;
    }
    if (con == true){
      cout << "Ronde!" << endl;
      continue;
    }
    con = false;
    int cntL = 0, last=num%10;
    string ay;
    temp = num;
    for (int i = 1; i <= 8; i++){
      int d = temp%10;
      ay += (char)d-'0';
      //cout << d << ' ' << last << endl;
      if (last == d)
	cntL++;
      else
	cntL = 1;
      if (cntL >= 3){
	con = true;
	break;
      }
      last = d;
      temp /= 10;
    }
    if (con == true){
      cout << "Ronde!" << endl;
      continue;
    }
    con = true;
    for (int i = 0; i < 4; i++){
      if (ay[i] != ay[7-i])
	con = false;
    }
    if (con == true){
      cout << "Ronde!" << endl;
      continue;
    }
    cout << "Rond Nist" << endl;
  }  
  return 0;
}
