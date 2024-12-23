// Problem Link: https://codeforces.com/problemset/problem/443/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();
  set<char> st;
  char c;
  while(cin >> c && c != '}'){
    if(c >= 'a' && c <= 'z') st.insert(c);
  }
  cout << st.size() << endl;
	
	return 0;
}
