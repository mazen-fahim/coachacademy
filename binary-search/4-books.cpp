// Problem Link: https://codeforces.com/problemset/problem/279/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 1e5

void fast_io()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int n, t;
vector<int> pre;
vector<int> books;

bool isOk(int mid)
{
  bool ans = false;
  for (int i = 0; i < n - mid + 1; i++)
  {
    if (i)
      ans |= (pre[i + mid - 1] - pre[i - 1] <= t);
    else
      ans |= (pre[i + mid - 1] <= t);
  }
  return ans;
}

int main()
{
  fast_io();
  cin >> n >> t;
  pre.resize(n);
  books.resize(n);
  for (auto &b : books)
    cin >> b;

  // prefix array
  for (int i = 0; i < n; i++)
  {
    pre[i] = books[i];
    if (i)
      pre[i] += pre[i - 1];
  }

  int lo = 0, hi = n, mid;
  while (lo < hi)
  {
    mid = (lo + 1 + hi) / 2;
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

  return 0;
}
