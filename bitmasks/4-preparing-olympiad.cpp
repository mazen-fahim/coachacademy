#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define ENDL "\n"

int main()
{
  int n, l, r, x;
  cin >> n >> l >> r >> x;
  vector<int> v(n);
  for (auto &x : v)
    scanf("%d", &x);

  bool f = 0;
  int cnt = 0;
  for (int msk = 0; msk < (1 << n); msk++)
  {
    int res = 0, mx = 0, mn = 1e8;
    for (int i = 0; i < n; i++)
    {
      if (msk & (1 << i))
      {
        res += v[i];
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
      }
    }
    if (res >= l && res <= r && (mx - mn >= x))
      cnt++;
  }
  cout << cnt << ENDL;
  return 0;
}