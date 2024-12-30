// Problem Link: https://codeforces.com/problemset/problem/1492/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N = 1e6;
typedef long long ll;

void fast_io(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}



ll n, k;

bool isOk(ll nc, vector<ll> &req, vector<ll> &has){
  ll a = k;
  for(ll i = 0; i < n; i++){
    if(req[i] * nc > has[i]) {
      a -= req[i]*nc - has[i];
      return !(a < 0);
    }
  }
  return true;
}


int main(){
	fast_io();
  cin >> n >> k;
  vector<ll> req(n);
  vector<ll> has(n);
  for(auto &x: req) cin >> x;
  for(auto &x: has) cin >> x;

  ll lo = 0, hi = 2e9;
  while(lo < hi){
    ll nc = (lo + 1 + hi)/2;
    if(isOk(nc, req, has))
      lo = nc;
    else
      hi = nc - 1;
  }

  cout << lo << endl;
	return 0;
}
