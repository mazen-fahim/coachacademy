// Problem Link: https://codeforces.com/problemset/problem/236/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();
  set<char> st;
  string s; cin >> s;
  for(char c: s) st.insert(c);
  if(st.size()&1)
    cout << "IGNORE HIM!" << endl;
  else
    cout << "CHAT WITH HER!" << endl;
	
	return 0;
}
