// problem link: https://codeforces.com/problemset/problem/160/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> vec;
int flag = 0;

bool isUnlucky(int i)
{ // The state is the current index
  // base case
  if (i == n)
    return true;

  // invalid case
  if (flag)
  {
    if (vec[i] >= vec[n + i])
      return false;
  }
  else
  {
    if (vec[i] <= vec[n + i])
      return false;
  }

  // transition
  return isUnlucky(i + 1);
}

int main()
{
  string s;
  scanf("%d", &n);
  cin >> s;
  for (int i = 0; i < 2 * n; i++)
  {
    vec.push_back(s[i] - '0');
  }
  sort(vec.begin(), vec.end() - n);
  sort(vec.begin() + n, vec.end());
  flag = (vec[0] < vec[n]);
  if (isUnlucky(0))
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
