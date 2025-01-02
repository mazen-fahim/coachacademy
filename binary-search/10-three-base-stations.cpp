// Problem Link: https://codeforces.com/problemset/problem/51/C
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

vector<int> houses;
int n;
bool isOk(double d)
{
  int i = 0, cnt = 0;
  while (i < n)
  {
    i = upper_bound(houses.begin(), houses.end(), houses[i] + 2 * d) - houses.begin();
    cnt++;
  }
  return (cnt <= 3);
}

int main()
{
  cin >> n;
  houses.resize(n);
  for (auto &h : houses)
    cin >> h;
  sort(houses.begin(), houses.end());

  double lo = 0, hi = 1e9, mid;
  double ans = 0;
  for (int i = 0; i < 1000; i++)
  {
    mid = (lo + hi) / 2.0;
    if (isOk(mid))
    {
      ans = mid;
      hi = mid;
    }
    else
    {
      lo = mid;
    }
  }

  cout << fixed << setprecision(6);
  cout << ans << endl;
  int j = 0;
  for (int i = 0; i < 3; i++)
  {
    j = (j > n - 1 ? n - 1 : j);
    cout << houses[j] + ans << " ";
    j = upper_bound(houses.begin(), houses.end(), houses[j] + 2 * ans) - houses.begin();
  }
  cout << endl;
}
