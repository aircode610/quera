#include <bits/stdc++.h>

using namespace std;


int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1;
  cin >> x2 >> y2;
  vector<pair<int, int> > all;
  for (int i = 1; i <= 2; i++){
    int y;
    if (i == 1)
      y = 2;
    else
      y = 1;
    all.push_back({x2+i, y2+y});
    all.push_back({x2+i, y2-y});
    all.push_back({x2-i, y2+y});
    all.push_back({x2-i, y2-y});
  }
  for (int i = 0; i < all.size(); i++){
    if (x1 == all[i].first && y1 == all[i].second){
      cout << "peidashoon kard" << endl;
      return 0;
    }
  }
  cout << "be kheir gozasht" << endl;
  return 0;
}
