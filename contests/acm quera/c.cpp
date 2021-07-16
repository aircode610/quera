#include <bits/stdc++.h>

using namespace std;

vector<string> valids;

bool username_valid(string username){
  char cur = ' ';
  char last = ' ';
  if (username[0] == '.' || username[username.length()-1] == '.')
    return false;
  for (int i = 0; i < username.length(); i++){
    if (cur == '.' && last == '.')
      return false;
    else if (!(((int)username[i] >= 97 && (int)username[i] <= 122) || ((int)username[i] >= 65 && (int)username[i] <= 90) || ((int)username[i] >= 48 && (int)username[i] <= 57) || username[i]=='.' || username[i]=='_')){
      return false;
    }
    char temp = cur;
    cur = username[i];
    last = temp;
  }

  string new_username = "";
  for (int i = 0; i < username.length(); i++){
    if (username[i] == '.')
      continue;
    else
      new_username += username[i];
  }
  if (!(new_username.length() >= 6 && new_username.length() <= 30))
    return false;
  
  return true;
}

bool domain_valid(string domain){
  if (!(domain.length() >= 3 && domain.length() <= 30))
    return false;
  if (domain[0] == '.' || domain[domain.length()-1] == '.')
    return false;
  char cur = ' ';
  char last = ' ';
  int count = 0;
  for (int i = 0; i < domain.length(); i++){
    if (cur == '.' && last == '.')
      return false;
    else if (!(((int)domain[i] >= 97 && (int)domain[i] <= 122) || ((int)domain[i] >= 65 && (int)domain[i] <= 90) || ((int)domain[i] >= 48 && (int)domain[i] <= 57) || domain[i]=='.' || domain[i]=='-')){
      return false;
    }
    char temp = cur;
    cur = domain[i];
    last = temp;
  }
  return true;
}
  
string simple (string username, string domain){
  string simple_username = "";
  for (int i = 0; i < username.length(); i++){
    if (username[i] == '.')
      continue;
    else if (username[i] == '_' || ((int)username[i] >= 48 && (int)username[i] <= 57))
      simple_username += username[i];
    else{
      if (((int)username[i] >= 97 && (int)username[i] <= 122))
	simple_username += username[i];
      else
	simple_username += char((int)username[i]+32);
    }
  }
  string simple_domain = "";
  for (int i = 0; i < domain.length(); i++){
    if (domain[i] == '-' || ((int)domain[i] >= 48 && (int)domain[i] <= 57) || domain[i] == '.')
      simple_domain += domain[i];
    else{
      if (((int)domain[i] >= 97 && (int)domain[i] <= 122))
	simple_domain += domain[i];
      else
	simple_domain += char((int)domain[i]+32);
    }
  }

  return simple_username + "@" + simple_domain;
}

int main() {

  int n; cin >> n;

  for (int i = 1; i <= n; i++){
    string email; cin >> email;
    string username, domain;
    bool found = false;
    for (int i = 0; i < email.length(); i++){
      if (email[i] == '@'){
	found = true;
	continue;
      }
      if (found == false)
	username += email[i];
      else
	domain += email[i];
    }
    //cout << username_valid(username) << " " << domain_valid(domain) << endl;
    if (username_valid(username) && domain_valid(domain)){
      string new_email = simple(username, domain);
      if (find(valids.begin(), valids.end(), new_email) == valids.end())
	valids.push_back(new_email);
    }  
  }

  cout << valids.size() << endl;
 
  return 0;
}
/*
5
acmacm@icpc.ir
acmacm..a@icpc.ir
.a1a1.abc@icpc.ir
acma.c.m@icpc.ir
acmacm@icpc.com
*/
