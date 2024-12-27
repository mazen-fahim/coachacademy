// Problem Link: https://codeforces.com/problemset/problem/337/A
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
  vector<int> vec(m);
  for (auto &x : vec)
    cin >> x;
  sort(vec.begin(), vec.end());
  int ans = INT_MAX;
  for (int i = 0; i < m - n + 1; i++)
  {
    ans = min(ans, vec[i + n - 1] - vec[i]);
  }
  cout << ans << endl;
  return 0;
}
