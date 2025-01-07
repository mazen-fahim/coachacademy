// problem link: https://codeforces.com/problemset/problem/1141/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int n, m;
bool flag = true;

void transform(int x)
{
  static int cnt = 0;
  // base case
  if (x == m)
  {
    if (flag)
    {
      printf("%d\n", cnt);
      flag = false;
    }
    return;
  }

  // transition
  if (x * 2 <= m)
  {
    cnt++;
    transform(x * 2);
    cnt--;
  }
  if (x * 3 <= m)
  {
    cnt++;
    transform(x * 3);
    cnt--;
  }
}
int main()
{
  cin >> n >> m;
  transform(n);
  if (flag)
    cout << -1 << '\n';
  return 0;
}
