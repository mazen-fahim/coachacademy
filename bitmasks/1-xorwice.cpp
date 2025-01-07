// problem link: https://codeforces.com/problemset/problem/1421/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 1e9 + 1

void fast_io(void)
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
    int a, b;
    cin >> a >> b;
    cout << (min(a, b) ^ max(a, b)) << endl;
  }

  return 0;
}