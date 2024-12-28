// Problem Link: https://codeforces.com/problemset/problem/1005/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();
	int n; cin >> n;
	vector<int> ans;
	int prv = 0;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		if(a == 1) {
			if(i!=0) ans.push_back(prv);
			if(i == n-1) ans.push_back(1);
		}
		if( i == n-1 && a != 1) ans.push_back(a);
		prv = a;
	}
	cout << ans.size() << endl;
	for(auto x: ans) cout << x << " ";
	cout << endl;
	return 0;
}
