#include <bits/stdc++.h>

using namespace std;

int main() {
  float n, m;
  cin >> n >> m;
  float h = 4000.0/n;
  if (h < m/2)
    cout << "khasis nabash! bia bishtar sharbat dorost konim" << endl;
  else if (h == m/2)
    cout << "hala mishe ye karish kard!" << endl;
  else
    cout << "damet garm! dige che khabar?!" << endl;
  return 0;
}
