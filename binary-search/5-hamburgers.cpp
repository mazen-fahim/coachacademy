// Problem Link: https://codeforces.com/problemset/problem/371/C

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 1e5
typedef long long ll;

void fast_io()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

string s;
ll money;
vector<ll> rec(3, 0);
vector<ll> has(3, 0);
vector<ll> price(3, 0);

bool isOk(ll mid)
{
  bool ans = true;

  ll m = money;
  for (ll i = 0; i < 3; i++)
  {
    if (rec[i] * mid > has[i])
    {
      ll needed = rec[i] * mid - has[i];
      if (needed > m / price[i])
      {
        return false;
      }
      else
      {
        m -= needed * price[i];
      }
    }
  }

  return ans;
}

int main()
{
  fast_io();

  cin >> s;
  for (auto c : s)
  {
    rec[0] += (c == 'B');
    rec[1] += (c == 'S');
    rec[2] += (c == 'C');
  }
  for (auto &x : has)
    cin >> x;
  for (auto &x : price)
    cin >> x;
  cin >> money;

  ll lo = 0, hi = 1e12 + 100, mid;

  while (lo < hi)
  {
    mid = (lo + hi + 1) / 2;
    if (isOk(mid))
    {
      lo = mid;
    }
    else
    {
      hi = mid - 1;
    }
  }

  cout << lo << endl;

  return 0;
}
