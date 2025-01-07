// problem link: https://www.codechef.com/problems/NXS2
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
    int n;
    cin >> n;
    if (!(n & n - 1))
      cout << -1 << endl;

    int a = 0;
    for (int i = 0; i < 32; i++)
    {
      if (n >> i & 1)
      {
        a = 1 << i;
        break;
      }
    }

    cout << a << " " << (n ^ a) << endl;
  }
  return 0;
}