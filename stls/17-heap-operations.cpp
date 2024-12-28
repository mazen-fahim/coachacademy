// Problem Link: https://codeforces.com/problemset/problem/637/B
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fast_io(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

// if I encounter getMin some number 
// then I will look if that number already exists in the heap
// if it does then make sure it's the minimum so insert as many remove minimum opeartions as possible.
// if not insert it first then make sure again like above. 
// This is the only way to achieve correct log.

// if I encounver insert just insert

// if I encounvter remove minumem just remove if heap is empty then add a redundent insert command before it.


int main(){
  fast_io();
  vector<string> ans;
  priority_queue<int, vector<int>, greater<int>> pq;
  int n; cin >> n;
  while(n--){
    string s; cin >> s;
    int x;
    if(s != "removeMin") cin >> x;
    if(s == "insert"){
      // no need to take any precautions here just do the operation.
      ans.push_back("insert " + to_string(x));
      pq.push(x);
    }
    else if(s == "getMin"){
      if(pq.empty()){
        // if pq is empty
        // insert x
        ans.push_back("insert " + to_string(x));
        pq.push(x);
        // then do the main operation in the log
        ans.push_back("getMin " + to_string(x));
      }
      else{
        // if the pq is not empty
        // remove first all element smaller than x
        while(!pq.empty() && pq.top() < x){
          ans.push_back("removeMin");
          pq.pop();
        }
        // then insert x
        ans.push_back("insert " + to_string(x));
        pq.push(x);
        // then do the main operation in the log
        ans.push_back("getMin " + to_string(x));
      }
    }
    else if(s == "removeMin"){
      if(pq.empty()){
        // if pq is empty
        // insert any number
        ans.push_back("insert 1");
        pq.push(1);

        // then do the main operation in the log
        ans.push_back("removeMin");
        pq.pop();
      }
      else{
        // if pq is not empty
        // then just remove it
        ans.push_back("removeMin");
        pq.pop();
      }
    }
  }

  cout << ans.size() << endl;
  for(auto x: ans) cout << x << endl;
  return 0;
}
