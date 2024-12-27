// Problem Link: https://codeforces.com/problemset/problem/1474/A
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
  string s;
  cin >> s;
  int sz1 = s.size();
  for (auto it = s.begin(); it != s.end(); it++)
  {
    if (*it == '0')
    {
      s.erase(it);
      break;
    }
  }
  int sz2 = s.size();
  if (sz1 == sz2)
  {
    s.erase(s.begin());
  }
  cout << s << endl;
  return 0;
}
