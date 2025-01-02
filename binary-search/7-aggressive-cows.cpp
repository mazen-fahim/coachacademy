// Problem Link: https://www.spoj.com/problems/AGGRCOW/en/
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

int n, c;
vector<int> cows;

bool isOk(int mid)
{
  // mid represents the minimum distance between any two cows that means cows shold be distance >= mid;
  // last cow index
  int lci = -1e9 - 1;
  for (int i = 0; i < c; i++)
  {
    // find the next cow which distance is >= to mid. (lower bound)
    int nci = *lower_bound(cows.begin(), cows.end(), lci + mid);
    int d = nci - lci;
    if (d < mid)
      return false;
    lci = nci;
  }
  return true;
}

int main()
{
  fast_io();
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n >> c;
    cows.resize(n);
    for (auto &c : cows)
      cin >> c;
    sort(cows.begin(), cows.end());

    int lo = 0, hi = 1e9, mid;
    while (lo < hi)
    {
      mid = (lo + hi + 1) / 2;
      if (isOk(mid))
      {
        lo = mid;
      }
      else
      {
        hi = mid - 1;
      }
    }

    cout << lo << endl;
  }

  return 0;
}
