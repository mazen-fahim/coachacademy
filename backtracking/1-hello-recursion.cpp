// problem link: https://www.spoj.com/problems/HRECURS/en/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum(vector<int> &vec, int i)
{ // The state is the current index
  // base case
  if (i == vec.size() - 1)
    return vec[i];

  // transition
  return vec[i] + sum(vec, i + 1);
}

int main()
{
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++)
  {
    int n;
    scanf("%d", &n);
    vector<int> vec(n);
    for (int j = 0; j < n; j++)
    {
      int in;
      cin >> in;
      vec.push_back(in);
    }
    int s = sum(vec, 0);
    printf("Case %d: %d\n", i, s);
  }
  return 0;
}
