#include <bits/stdc++.h>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  int cnt = 0;
  for (int i = 1; i <= 8; i++){
    for (int j = 1; j <= 8; j++){
      if (i != x1 && i != x2 && j != y1 && j != y2)
	cnt++;
    } 
  }
  cout << cnt << endl;
  return 0;
}
