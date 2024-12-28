// Problem Link: https://atcoder.jp/contests/abc217/tasks/abc217_e?lang=en
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int main()
{
  fast_io();
  int t, q, x;
  queue<int> qu;
  priority_queue<int, vector<int>, greater<int>> pq;
  cin >> t;

  while (t--)
  {
    cin >> q;

    if (q == 1)
    {
      cin >> x;

      qu.push(x);
    }
    else if (q == 2)
    {
      if (pq.empty())
      {
        cout << qu.front() << '\n';

        qu.pop();
      }
      else
      {
        cout << pq.top() << '\n';

        pq.pop();
      }
    }
    else
    {
      int qs = qu.size();
      while (qs--)
      {
        pq.push(qu.front());
        qu.pop();
      }
    }
  }
  return 0;
}
