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
  ll n;
  cin >> n;
  priority_queue<ll, vector<ll>, greater<>> pq;
  ll h = 0;
  while (n--)
  {
    ll p;
    cin >> p;
    h += p;
    if (h < 0)
    {
      if (!pq.empty() && pq.top() < p)
      {
        h -= pq.top();
        pq.pop();
        pq.push(p);
      }
      else
      {
        h -= p;
      }
    }
    else
    {
      pq.push(p);
    }
  }

  cout << pq.size() << endl;

  return 0;
}
