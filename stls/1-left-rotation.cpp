// Problem Link: https://www.hackerrank.com/challenges/array-left-rotation/problem

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, d;
	cin >> n >> d;
	vector<int> vec(n);
	for(auto &x: vec) cin >> x;

	for(int i = 0; i < n; i++){
		cout << vec[d%n] << " ";
		d++;
	}

	cout << endl;

	return 0;

}
