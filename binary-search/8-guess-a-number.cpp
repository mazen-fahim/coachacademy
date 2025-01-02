// Problem Link: https://codeforces.com/problemset/problem/416/A
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

int main()
{
  int n;
  cin >> n;
  int l = -2e9, r = 2e9;
  while (n--)
  {
    string s;
    cin >> s;
    int x;
    cin >> x;
    string ans;
    cin >> ans;
    if (s.front() == '>')
    {
      if (ans == "Y")
      {
        if (s.size() == 2)
          l = max(l, x);
        else
          l = max(l, x + 1);
      }
      else
      {
        if (s.size() == 2)
          r = min(r, x - 1);
        else
          r = min(r, x);
      }
    }
    else
    {
      if (ans == "Y")
      {
        if (s.size() == 2)
          r = min(r, x);
        else
          r = min(r, x - 1);
      }
      else
      {
        if (s.size() == 2)
          l = max(l, x + 1);
        else
          l = max(l, x);
      }
    }
  }
  if (l <= r)
    cout << l << endl;
  else
    cout << "Impossible" << endl;
}
