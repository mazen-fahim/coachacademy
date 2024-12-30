// Problem Link: https://codeforces.com/problemset/problem/1492/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N = 1e6;

void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int main(){
  fast_io();
  int n; cin >> n;
  vector<int> vec(n);
  for(auto &x: vec) cin >> x;
  sort(vec.begin(), vec.end(), greater<>());
  int l, r;
  l = r = 0;

  int ans = 0;
  while(r < n){
    if(vec[r]*2 <= vec[l]){
      ans++;
      vec[l] = -1;
      vec[r] = -1;
      l++;
    }
    r++;
  }
  cout << n - ans << endl;


  return  0;
}
