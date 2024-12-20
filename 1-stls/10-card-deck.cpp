// Problem Link: https://codeforces.com/problemset/problem/1492/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> indx(n+1);
		vector<int> vec(n+1, -1);

		for(int i = 0; i < n; i++){
			int x; cin >> x;
			vec[i] = x;
			indx[x] = i;
		}

		for(int x = n; x > 0; x--){
			if(vec[indx[x]] != -1){
				for(int i = indx[x]; vec[i] != -1; i++){
					cout << vec[i] << " ";
					vec[i] = -1;
				}
			}
		}
		cout << endl;
	}
	
	return 0;
}
