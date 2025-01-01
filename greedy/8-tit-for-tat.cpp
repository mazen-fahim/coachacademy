// problem link: https://codeforces.com/problemset/problem/1516/A
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
  fast_io;
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);

    for (auto &x : vec)
    {
      cin >> x;
    }

    int i, used = 0;
    for (i = 0; i < n - 1; i++)
    {
      if (k >= vec[i])
      {
        used += vec[i];
        k -= vec[i];
        vec[i] = 0;
      }
      else
      {
        used += k;
        vec[i] -= k;
        k -= k;
        break;
      }
    }
    vec[n - 1] += used;

    for (auto x : vec)
    {
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}
