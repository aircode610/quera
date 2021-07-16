#include <bits/stdc++.h>
#define int long long

using namespace std;

pair<string, string> days[8];

bool smaller(string a, string b){
  string h1 = "", m1 = "", h2 = "", m2 = "";
  bool con = true;
  for (int i = 0; i < a.size(); i++){
    if (a[i] == ':'){
      con = false;
      continue;
    }
    if (con)
      h1 += a[i];
    else
      m1 += a[i];
  }
  con = true;
  for (int i = 0; i < b.size(); i++){
    if (b[i] == ':'){
      con = false;
      continue;
    }
    if (con)
      h2 += b[i];
    else
      m2 += b[i];
  }
  int ih1, im1, ih2, im2;
  
  stringstream c1(h1);
  c1 >> ih1;
  stringstream c2(m1);
  c2 >> im1;
  stringstream c3(h2);
  c3 >> ih2;
  stringstream c4(m2);
  c4 >> im2;

  if (ih1 < ih2 || (ih1 == ih2 && im1 < im2))
    return true;
  else
    return false;
}

bool bigger(string a, string b){
  string h1 = "", m1 = "", h2 = "", m2 = "";
  bool con = true;
  for (int i = 0; i < a.size(); i++){
    if (a[i] == ':'){
      con = false;
      continue;
    }
    if (con)
      h1 += a[i];
    else
      m1 += a[i];
  }
  con = true;
  for (int i = 0; i < b.size(); i++){
    if (b[i] == ':'){
      con = false;
      continue;
    }
    if (con)
      h2 += b[i];
    else
      m2 += b[i];
  }
  int ih1, im1, ih2, im2;
  
  stringstream c1(h1);
  c1 >> ih1;
  stringstream c2(m1);
  c2 >> im1;
  stringstream c3(h2);
  c3 >> ih2;
  stringstream c4(m2);
  c4 >> im2;

  if (ih1 > ih2 || (ih1 == ih2 && im1 > im2))
    return true;
  else
    return false;
}

int32_t main() {
  int n, m, q;
  cin >> n;
  for (int i = 1; i <= n; i++){
    string day, beg, end;
    cin >> day >> beg >> end;
    if (day == "Sunday"){
      if (smaller(beg, days[1].first))
	  days[1].first = beg;
      if (bigger(end, days[1].second))
	days[1].second = end;
    }
    else if (day == "Monday"){
      if (smaller(beg, days[2].first))
	days[2].first = beg;
      if (bigger(end, days[2].second))
	days[2].second = end;
    }
    else if (day == "Tuesday"){
      if (smaller(beg, days[3].first))
	days[3].first = beg;
      if (bigger(end, days[3].second))
	days[3].second = end;
    }
    else if (day == "Wednesday"){
      if (smaller(beg, days[4].first))
	days[4].first = beg;
      if (bigger(end, days[4].second))
	days[4].second = end;
    }
    else if (day == "Thursday"){
      if (smaller(beg, days[5].first))
	days[5].first = beg;
      if (bigger(end, days[5].second))
	days[5].second = end;
    }
    else if (day == "Friday"){
      if (smaller(beg, days[6].first))
	days[6].first = beg;
      if (bigger(end, days[6].second))
	days[6].second = end;
    }
    else if (day == "Saturday"){
      if (smaller(beg, days[7].first))
	days[7].first = beg;
      if (bigger(end, days[7].second))
	days[7].second = end;
    }
  }
  for (int i = 1; i <= 7; i++)
    cout << days[i].first << ' ' << days[i].second << endl;
  return 0;
}
