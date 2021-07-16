#include <bits/stdc++.h>
#define int long long

using namespace std;

bool check(string inp) {
  for (int i = 0; i < inp.size(); i++){
    if (inp[i] == 'A' && ((inp[i-1] == 'C' && inp[i+1] == 'G') || (inp[i-1] == 'G' && inp[i+1] == 'C')))
      return true;
  }
  return false;
}

int32_t main() {
  string dna, bdna;
  cin >> dna;
  dna += '-';
  char last = dna[0];
  for (int i = 1; i < dna.size(); i++){
    if (dna[i] == 'T')
      continue;
    if (last != dna[i]){
      //cout << i << ' ' << last << endl;
      bdna += last;
    }
    last = dna[i];
  }
  //cout << bdna << endl;
  if (check(bdna) == true)
    cout << "Hoora!" << endl;
  else
    cout << "Heif:(" << endl;
  return 0;
}

