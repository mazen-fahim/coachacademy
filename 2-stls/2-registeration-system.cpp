// Problem Link: https://codeforces.com/problemset/problem/4/C
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();
  unordered_map <string, int> mp;
  int n; cin >> n;
  while(n--){
    string s; cin >> s;
    if(mp.find(s) != mp.end()){
      string ns = s + to_string(++mp[s]);
      cout << ns << endl;
    }
    else{
      mp[s] = 0;
      cout << "OK" << endl;
    }
  }
	
	return 0;
}
