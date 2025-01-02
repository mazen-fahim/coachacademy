// Problem Link: https://codeforces.com/problemset/problem/670/D2

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 1e6
typedef long long ll;

void fast_io()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

ll n, k;
bool isOk(ll mid, vector<ll> &ing, vector<ll> &has)
{
  ll a = k;
  for (int i = 0; i < n; i++)
  {
    if (ing[i] * mid > has[i])
    {
      if (ing[i] * mid > has[i] + a)
        return false;
      else
        a -= (ing[i] * mid - has[i]);
    }
  }
  return true;
}

int main()
{
  fast_io();
  cin >> n >> k;
  vector<ll> ing(n);
  vector<ll> has(n);
  for (auto &x : ing)
    cin >> x;
  for (auto &x : has)
    cin >> x;

  ll lo = 0, hi = 2e9 + 1, mid;
  while (lo < hi)
  {
    mid = (lo + 1 + hi) / 2;
    if (isOk(mid, ing, has))
      lo = mid;
    else
      hi = mid - 1;
  }

  cout << lo << endl;

  return 0;
}
