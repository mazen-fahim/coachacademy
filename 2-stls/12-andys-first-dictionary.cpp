// Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1756
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
  string in;
  set<string> words;

  while (cin >> in)
  {
    int size = in.size();

    string current = "";
    for (int i = 0; i < size; ++i)
    {
      char c = tolower(in[i]);
      if (isalpha(c))
        current += c;
      else if (current != "")
      {
        words.insert(current);
        current = "";
      }
    }
    if (current != "")
      words.insert(current);
  }

  for (set<string>::iterator iter = words.begin(); iter != words.end(); ++iter)
    cout << *iter << '\n';

  return 0;
}
