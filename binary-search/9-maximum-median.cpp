// Problem Link: https://codeforces.com/problemset/problem/1201/C
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

ll sum = 0;
ll n, k;
ll median;
vector<ll> vec;
bool isOk(ll mid)
{
  ll moves = 0;
  for (int i = n / 2; i < n; i++)
  {
    if (mid - vec[i] > 0)
      moves += mid - vec[i];
    if (moves > k)
      return false;
  }
  return (moves <= k);
}

int main()
{
  cin >> n >> k;
  vec.resize(n);
  for (auto &x : vec)
    cin >> x;
  sort(vec.begin(), vec.end());

  for (int i = n / 2 + 1; i < n; i++)
    sum += vec[i];
  median = vec[n / 2];
  ll lo = 0, hi = 2e9, mid;
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
}
