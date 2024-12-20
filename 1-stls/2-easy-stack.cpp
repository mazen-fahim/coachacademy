// Problem Link: https://www.spoj.com/problems/STACKEZ/en/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	stack<int> stk;
	while(t--){
		int q; cin >> q;
		if(q == 1) {
			int n; cin >> n; stk.push(n);
		}
		else if(q == 2 && !stk.empty()) stk.pop();
		else if(q == 3){
			if(stk.empty())
				cout << "Empty!" << '\n';
			else 
				cout << stk.top() << '\n';
		}
	} 

	return 0;

}
