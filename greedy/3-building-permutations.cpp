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
  int n;
  cin >> n;
  vector<int> vec(n);
  for (auto &x : vec)
    cin >> x;
  sort(vec.begin(), vec.end());
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans += abs(vec[i] - (i + 1));
  }
  cout << ans << endl;
  return 0;
}
