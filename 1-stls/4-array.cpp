// Problem Link: https://codeforces.com/problemset/problem/300/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();
	int n; cin >> n;
	vector<int> vec(n);

	int zero = 0, neg = 0, pos = 0;
	for(auto &x: vec) {
		cin >> x;
		if(x==0)zero++;
		else if(x < 0) neg++;
		else pos++;
	}

	vector<int> p;
	vector<int> n;
	vector<int> z;

	bool f = true;
	// if neg is odd
	for(auto x: vec){
		if(x == 0) z.push_back(0);
		else if(x < 0){
			if(n.empty())
				n.push_back(x);
			else if(neg&1){
				p.push_back(x);
			}
			else{
				if(f){ 
					z.push_back(x);
					f = false;
				}
				else
					p.push_back(x);
			}
		}
		else 
			p.push_back(x);
	}

	return 0;

}
