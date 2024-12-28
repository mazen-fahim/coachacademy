// Problem Link: https://codeforces.com/problemset/problem/343/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();
	string s; cin >> s;
	int sz = s.size();

	if(sz == 1){
		cout << "No" << '\n';
		return 0;
	}


	for(int i = 0; i < sz/2; i++){
		if(s[i] != s[sz-1-i]){
			cout << "No" << '\n';
			return 0;
		}
	}

	if(sz&1 && s[sz/2+1] != s[sz/2]){
		cout << "No" << '\n';
		return 0;
	}

	cout << "Yes" << '\n';
	return 0;
}
