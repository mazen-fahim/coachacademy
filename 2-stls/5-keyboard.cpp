// Problem Link: https://codeforces.com/problemset/problem/474/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fast_io(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
  fast_io();

  string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
  map<char, int> mp;
  for(int i = 0; i < str.size(); i++){
    mp[str[i]] = i;
  }
  char ch;
  string s;
  cin >> ch;
  cin >> s;
  int sz = s.size();
  if(ch == 'R'){
    for(int i = 0; i < sz; i++)
      printf("%c", str[mp[s[i]] - 1]);
  }
  else{
    for(int i = 0; i < sz; i++)
      printf("%c", str[mp[s[i]] + 1]);
  }
  printf("\n");


  return 0;
}
