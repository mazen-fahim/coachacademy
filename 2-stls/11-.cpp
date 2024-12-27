// Problem Link: https://codeforces.com/problemset/problem/1526/C2
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
    map<int, int> fmp;
    map<int, int> fcnt;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      fmp[x]++;
    }

    for (auto &el : fmp)
    {
      fcnt[el.second]++;
    }

    int minF = INT_MAX;
    for (auto &el : fcnt)
    {
    }

    fmp.clear();
  }

  cout << pq.size() << endl;

  return 0;
}
