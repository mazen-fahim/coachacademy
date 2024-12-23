// Problem Link: https://codeforces.com/problemset/problem/637/B
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fast_io(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
  fast_io();
  stack<string> stk;
  set<string> st;
  int n;
  cin >> n;
  while (n--) {
    string input;
    cin >> input;
    stk.push(input);
    st.insert(input);
  }

  int sz = stk.size();
  for (int i = 0; i < sz; i++) {
    if (st.find(stk.top()) != st.end()) {
      cout << stk.top() << endl;
      st.erase(stk.top());
    }
    stk.pop();
  }

  return 0;
}
