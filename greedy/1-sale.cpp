// Problem Link: https://codeforces.com/problemset/problem/34/B
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
  int n, m;
  cin >> n >> m;
  vector<int> vec(n);
  int ans = 0;
  for (auto &x : vec)
    cin >> x;
  sort(vec.begin(), vec.end());
  for (auto el : vec)
  {
    if (m != 0 && el < 0)
    {
      ans -= el;
      m--;
    }
    else
    {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
