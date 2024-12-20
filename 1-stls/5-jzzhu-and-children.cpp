// Problem Link: https://codeforces.com/problemset/problem/450/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();
	queue<int> q;

	int n, m; cin >> n >> m;
	vector<int> cw(n);
	for(int i = 0; i < n; i++){
		int c; cin >> c; cw[i] = c;
		q.push(i);
	}

	int lc = 0;
	while(!q.empty()){
		// he needs more go back of the queue
		if(cw[q.front()] - m > 0){
			cw[q.front()] -= m;
			q.push(q.front());
		}
		// go home
		else{
			lc = q.front();
		}
		q.pop();
	}
	cout << lc + 1 << endl;




	return 0;

}
