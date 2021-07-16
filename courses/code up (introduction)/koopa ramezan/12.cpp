#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  float x=0, y=0;
  char con = 'N';
  for (int i = 1; i <= n; i++){
    char inp; cin >> inp;
    float s; cin >> s;

    //change con
    if (inp == 'R'){
      if (con == 'N')
	con = 'E';
      else if (con == 'E')
	con = 'S';
      else if (con == 'S')
	con = 'W';
      else
	con = 'N';
    }
    else {
      if (con == 'N')
	con = 'W';
      else if (con == 'W')
	con = 'S';
      else if (con == 'S')
	con = 'E';
      else
	con = 'N';
    }

    //change coords
    if (con == 'N')
      y += s;
    else if (con == 'S')
      y -= s;
    else if (con == 'E')
      x += s;
    else
      x -= s;
  }
  cout << '[' << x << ' ' << y << ']' << endl;
  cout << con << endl;
  return 0;
}
