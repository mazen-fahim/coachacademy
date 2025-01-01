// Problem Link: https://codeforces.com/problemset/problem/258/A
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
  bool f = false;
  for (auto it = s.begin(); it != s.end(); it++)
  {
    if (*it == '0')
    {
      f = true;
      s.erase(it);
      break;
    }
  }
  if (f)
    cout << s << endl;
  else
  {
    s.erase(s.begin());
    cout << s << endl;
  }
  return 0;
}
