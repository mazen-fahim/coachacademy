// Problem Link: https://codeforces.com/problemset/problem/946/A
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
  int ans = 0;
  while (n--)
  {
    int x;
    cin >> x;
    ans += abs(x);
  }
  cout << ans << endl;
  return 0;
}
