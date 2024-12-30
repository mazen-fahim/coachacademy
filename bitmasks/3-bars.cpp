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
    int n, p;
    cin >> n >> p;
    vector<int> vec(p);
    for (auto &x : vec)
      cin >> x;

    bool found = false;
    for (int msk = 0; msk < 1 << 21; msk++)
    {
      int s = 0;
      for (int i = 0; i < 20; i++)
      {
        if (msk & 1 << i)
        {
          s += vec[i];
        }
      }
      if (s == n)
      {
        found = true;
        break;
      }
    }

    if (found)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}