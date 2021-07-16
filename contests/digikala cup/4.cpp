#include <bits/stdc++.h>
#define int long long

using namespace std;

const int M = 2000 + 10;
int dp[M][M];
vector<char> ans;

int32_t main() {

  int n, m;
  cin >> n >> m;
  int a[n+1][m+1];

  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= m; j++){
      int num;
      cin >> num;
      a[i][j] = num;
    }
  }
  
  for (int i = n; i >= 1; i--){
    for (int j = 1; j <= m; j++){
      if (i+1 > n && j-1 < 1){
	dp[i][j] = a[i][j];
      }
      else if (i+1 > n){
	dp[i][j] = dp[i][j-1] + a[i][j];
      }
      else if (j-1 < 1){
	dp[i][j] = dp[i][j-1] + a[i][j];
      }
      else{
	if (dp[i+1][j] > dp[i][j-1]){
	  dp[i][j] = dp[i+1][j]+a[i][j];
	}
	else {
	  dp[i][j] = dp[i][j-1]+a[i][j];
	}
      }
    }
  }
  
  cout << dp[1][m] << endl;
  int i = 1;
  int j = m;
  while (true){
    if (i == n && j == 1)
      break;
    if (i+1 > n){
      ans.push_back('R');
      j -= 1;
    }
    else if (j-1 < 1){
      ans.push_back('U');
      i += 1;
    }
    else {
      if (dp[i+1][j] > dp[i][j-1] && i+1 <= n){
	ans.push_back('U');
	i += 1;
      }
      else if (j-1 >= 1){
	ans.push_back('R');
	j -= 1;
      }
    }
    
  }
  for (int i = ans.size()-1; i >= 0; i--){
    cout << ans[i];
  }
  cout << endl;
  
  return 0;
}
