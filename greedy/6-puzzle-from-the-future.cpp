// Problem Link: https://codeforces.com/problemset/problem/1474/A
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
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int prv = 0;

    string ans = "";
    for (auto c : s)
    {
      if ((c - '0') + 1 == prv)
      {
        ans += '0';
        prv = c - '0';
      }
      else
      {
        ans += '1';
        prv = c - '0' + 1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
