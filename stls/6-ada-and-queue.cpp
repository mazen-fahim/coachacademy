// Problem Link: https://www.spoj.com/problems/ADAQUEUE/en/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
	fast_io();

	int q; cin >> q;

	deque<int> dq;
	bool r = false;

	while(q--){
		string s; cin >> s;
		if(s == "back"){
			if(dq.empty())
				cout << "No job for Ada?" << endl;
			else{
				if(!r){
					cout << dq.back() << endl;
					dq.pop_back();
				}
				else{
					cout << dq.front() << endl;
					dq.pop_front();
				}
			}

		}
		else if(s == "front"){
			if(dq.empty())
				cout << "No job for Ada?" << endl;
			else{
				if(!r){
					cout << dq.front() << endl;
					dq.pop_front();
				}
				else{
					cout << dq.back() << endl;
					dq.pop_back();
				}
			}

		}
		else if(s == "reverse"){
			r = !r;
		}
		else if(s == "push_back"){
			int n; cin >> n;
			if(!r) dq.push_back(n);
			else dq.push_front(n);

		}
		else if(s == "toFront"){
			int n; cin >> n;
			if(r) dq.push_back(n);
			else dq.push_front(n);
		}


	}


	return 0;

}
