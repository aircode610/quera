#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
  string num;
  cin >> num;
  num += '-';
  int ans = 0;
  for (int i = 0; i < num.size()-1; i++){
    if (num[i] == 'I' && num[i+1] == 'V'){
      ans += 4;
      i++;
    }
    else if (num[i] == 'I' && num[i+1] == 'X'){
      ans += 9;
      i++;
    }
    else if (num[i] == 'X' && num[i+1] == 'L'){
      ans += 40;
      i++;
    }
    else if (num[i] == 'X' && num[i+1] == 'C'){
      ans += 90;
      i++;
    }
    else {
      if (num[i] == 'I')
	ans += 1;
      else if (num[i] == 'V')
	ans += 5;
      else if (num[i] == 'X')
	ans += 10;
      else if (num[i] == 'L')
	ans += 50;
      else
	ans += 100;
    }
  }
  cout << ans << endl;
  return 0;
}

