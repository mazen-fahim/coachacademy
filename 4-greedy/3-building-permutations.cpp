// Problem Link: https://codeforces.com/problemset/problem/285/C
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void fast_io()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int main()
{
  fast_io();
  ll n;
  cin >> n;
  vector<ll> vec(n);
  for (auto &x : vec)
    cin >> x;
  sort(vec.begin(), vec.end());
  ll ans = 0;
  for (ll i = 0; i < n; i++)
  {
    ans += abs(vec[i] - (i + 1));
  }
  cout << ans << endl;
  return 0;
}
