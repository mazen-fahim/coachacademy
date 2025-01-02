// Problem Link: https://codeforces.com/problemset/problem/372/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 1e6

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
  vector<bool> taken(n, false);
  for (auto &x : vec)
    cin >> x;
  sort(vec.begin(), vec.end(), greater<>());
  int l, r;
  l = r = 0;
  int ans = 0;
  while (r < n)
  {
    if (!taken[l])
    {
      if (vec[l] >= 2 * vec[r])
      {
        taken[l] = true;
        taken[r] = true;
        ans++;
        l++;
      }
    }
    else
    {
      while (l < n && taken[l++])
        ;
    }
    r++;
  }
  cout << n - ans << endl;

  return 0;
}
