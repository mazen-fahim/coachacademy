// problem link: https://codeforces.com/problemset/problem/1454/D
#include <bits/stdc++.h>
#include <iostream>
#define IO                                                                     \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);

using namespace std;
typedef long long ll;

vector<pair<ll, ll>> prime_factor(ll x) {
  vector<pair<ll, ll>> ans;

  for (ll i = 2; i * i < x; i++) {
    ll cnt = 0;
    while (x % i == 0) {
      cnt++;
      x /= i;
    }
    if (cnt)
      ans.push_back({i, cnt});
  }
  if (x != 1)
    ans.push_back({x, 1});
  return ans;
}

void solve() {
  ll n;
  cin >> n;

  auto pf = prime_factor(n);

  vector<ll> ans;
  for (ll i = 0; i < pf[0].second; i++) {
    ans.push_back(pf[0].first);
  }

  ll m = 1;
  for (ll i = 1; i < pf.size(); i++) {
    ll x = pf[i].first;
    ll p = pf[i].second;
    while (p--)
      m *= x;
  }

  *ans.rbegin() *= m;

  cout << ans.size() << '\n';
  for (auto x : ans)
    cout << x << " ";
  cout << '\n';
}

int main() {
  IO;
  ll t;
  cin >> t;
  for (ll i = 1; i <= t; i++) {
    solve();
  }
}
