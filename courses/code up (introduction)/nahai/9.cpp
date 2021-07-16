#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  if (k % 10 == 0)
    k /= 10;
  else
    k = (k/10)+1;
  int r = k/(m+1)*2, l = k%(m+1), con=1;
  if (r+1 > n){
    r = n;
    l = 0;
  }
  for (int i = 1; i <= r; i++){
    if (i % 2 == 1)
      for (int j = 1; j <= m; j++)
	cout << '#';
    else{
      if (con == 0){
	cout << '#';
	for (int j = 1; j < m; j++)
	  cout << '*';
	con = 1;
      }
      else {
	for (int j = 1; j < m; j++)
	  cout << '*';
	cout << '#';
	con = 0;
      }
    }
    cout << endl;
  }
  if (con == 1){
    for (int i = 1; i <= l; i++)
      cout << '#';
    for (int i = 1; i <= m-l; i++)
      cout << '*';
    cout << endl;
  }
  else {
    for (int i = 1; i <= m-l; i++)
      cout << '*';
    for (int i = 1; i <= l; i++)
      cout << '#';    
    cout << endl;
  }
  for (int i = 1; i <= n-r-1; i++){
    for (int j = 1; j <= m; j++)
      cout << '*';
    cout << endl;
  } 
  return 0;
}
