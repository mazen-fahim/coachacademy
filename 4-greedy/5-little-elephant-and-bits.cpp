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
  for (auto it = s.begin(); it != s.end(); it++)
  {
    if (*it == '0')
    {
      s.erase(it);
      break;
    }
  }
  cout << s << endl;
  return 0;
}
