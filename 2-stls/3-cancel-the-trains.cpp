// Problem Link: https://codeforces.com/problemset/problem/1453/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();
  set<int> st;
  int t; cin >> t;
  while(t--){
    int ans = 0;
    st.clear();
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
      int tn; cin >> tn;
      st.insert(tn);
    }
    for(int i = 0; i < m; i++){
      int tn; cin >> tn;
      if(st.find(tn) != st.end()) ans++;
    }
    cout << ans << endl;
  }

	
	return 0;
}
