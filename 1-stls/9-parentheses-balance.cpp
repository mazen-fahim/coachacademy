// Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=614

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();
	
	int n; 
	string s;
	map<char, char> mp;
	mp[']'] = '[';
	mp[')'] = '(';

	cin >> n;
	cin.ignore(); //ignore the '\n' char in input stream.

	while(n--){
		stack<int> stk;

		getline(cin, s);

		bool correct = true;
		for(auto c: s){
			if(c == '(' || c == '[') stk.push(c);
			else{
				if(stk.empty()){
					correct = false;
					break;
				}
				else if(mp[c] != stk.top()){
					correct = false;
					break;
				}
				else stk.pop();
			}
		}

		if(stk.empty() && correct) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}
