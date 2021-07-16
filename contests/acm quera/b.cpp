#include <bits/stdc++.h>
#define INF 5000

using namespace std;

int main() {

  int money, n;
  cin >> money >> n;
  int so=0, noz=INF, all=money, allGold=0, count=0,gold=0;

  for (int i = 1; i <= n;i++){
    gold; cin >> gold;
    if (gold <= noz){
      if (count == 1){
	all += allGold * so;
	allGold = 0;
	so = 0;
	count--;
      }
      noz = gold;
    }
    else {
      if (gold >= so){
	if (count == 0){
	  allGold = all / noz;
	  all = all % noz;
	  count++;
	}
	so = gold;
	noz = so;
      }
    }
  }
  if (allGold != 0){
    all += allGold * so;
  }
  cout << all << endl;
  
  return 0;
}
