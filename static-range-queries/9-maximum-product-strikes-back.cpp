// problem link: https://codeforces.com/problemset/problem/1660/D

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec)
      cin >> x;
    vector<int> pre(n);
    vector<int> sfx(n);

    for (int i = 0; i < n; i++)
    {
      pre[i] = vec[i];
      sfx[n - 1 - i] = vec[n - 1 - i];
      if (i && pre[i - 1] != 0)
      {
        pre[i] *= pre[i - 1];
      }
      if (i && sfx[n - i] != 0)
      {
        sfx[n - i - 1] *= sfx[n - i];
      }
    }

    int mi1 = distance(pre.begin(), max_element(pre.begin(), pre.end()));
    int mi2 = distance(sfx.begin(), max_element(sfx.begin(), sfx.end()));
    int zeroi1 = -1;
    int zeroi2 = n;
    for (int i = mi1; i >= 0; i--)
    {
      if (vec[i] == 0)
      {
        zeroi1 = i;
        break;
      }
    }
    for (int i = mi2; i < n; i++)
    {
      if (vec[i] == 0)
      {
        zeroi2 = i;
        break;
      }
    }

    //    for (auto x : pre)
    //      cout << x << " ";
    //    cout << endl;
    //    for (auto x : sfx)
    //      cout << x << " ";
    //    cout << endl;
    //    cout << "mi1= " << mi1 << endl;
    //    cout << "mi2= " << mi2 << endl;
    //    cout << "zeroi1= " << zeroi1 << endl;
    //    cout << "zeroi2= " << zeroi2 << endl;

    if (vec[mi1] > vec[mi2])
    {
      cout << zeroi1 + 1 << " " << n - 1 - mi1 << endl;
    }
    else
    {
      cout << mi2 << " " << n - zeroi2 << endl;
    }
  }
}
