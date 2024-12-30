// Problem Link: https://codeforces.com/problemset/problem/1492/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N = 1e5;


void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}

int n, t;
int pre[N];

bool isOk(int mid){
  bool ans = false;
  for(int i = 0; i < n - mid;i++){
    ans |= (pre[mid-1]-pre[i-1]) <= t;
  }

  return ans;
}

int main(){
  fast_io();
  cin >> n >> t;
  vector<int> vec(n);
  for(int i = 0; i < n; i++){
    pre[i] = vec[i];
    if(i) pre[i] += pre[i-1];
  }

  int lo = 0, hi = n-1, mid;
  while(lo < hi){
    mid = (lo + 1 + hi) / 2;
    if(isOk(mid)){
      lo = mid;
    }
    else
    {
      hi = mid - 1;
    }
  }

  return 0;
}
