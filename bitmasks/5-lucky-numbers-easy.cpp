#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define N 1e9
typedef long long ll;

void fast_io(void)
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

  ll ans = 1e10;
  for (int msk = 0; msk < (1 << 10); msk++)
  {
    ll num = 0;
    int cnt4 = 0;
    int cnt7 = 0;
    for (int i = 0; i < 10; i++)
    {
      num *= 10;
      if (msk & (1 << i))
      {
        num += 7;
        cnt7++;
      }
      else
      {
        num += 4;
        cnt4++;
      }
      if (cnt4 == cnt7 && num >= n)
      {
        ans = min(ans, num);
      }
    }
  }
  cout << ans << endl;
  return 0;
}