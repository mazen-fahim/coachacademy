// Problem Link: https://codeforces.com/gym/101028/problem/I
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

int n, k;
vector<int> holes;
bool isOk(int mid)
{
  int e = -1;
  for (int i = 0; i < k; i++)
  {
    if (upper_bound(holes.begin(), holes.end(), e) == holes.end())
      return true;
    else
      e = *upper_bound(holes.begin(), holes.end(), e) + mid - 1;
  }
  return (upper_bound(holes.begin(), holes.end(), e) == holes.end());
}

int main()
{
  fast_io();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    holes.resize(n);
    for (auto &h : holes)
      cin >> h;
    int lo = 0, hi = 1e9, mid;
    while (lo < hi)
    {
      mid = (lo + hi) / 2;
      if (isOk(mid))
      {
        hi = mid;
      }
      else
      {
        lo = mid + 1;
      }
    }
    cout << lo << endl;
  }

  return 0;
}
