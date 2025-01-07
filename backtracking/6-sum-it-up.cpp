// problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=515
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
int t, n;
bool flag = false;
vector<int> vec;
vector<int> ind;
set<string> st;

// state is i
void sum(int i, int s)
{
  // invalid case
  if (s > t)
    return;
  if (i > n)
    return;

  // base case
  if (s == t)
  {
    flag = true;
    string s = "";
    for (int j = 0; j < ind.size() - 1; j++)
    {
      s += to_string(vec[ind[j]]);
      s += '+';
    }
    s += to_string(vec[ind.back()]);
    st.insert(s);
    return;
  }

  // transition
  ind.push_back(i);
  sum(i + 1, s + vec[i]);
  ind.pop_back();
  sum(i + 1, s);
}
int main()
{
  while (1)
  {
    st.clear();
    vec.clear();
    ind.clear();
    flag = false;
    cin >> t >> n;
    if (!t && !n)
      break;
    for (int i = 0; i < n; i++)
    {
      int in;
      cin >> in;
      vec.push_back(in);
    }
    sum(0, 0);
    cout << "Sums of " << t << ":" << endl;
    if (!flag)
      printf("NONE\n");
    else
    {
      for (auto it = st.rbegin(); it != st.rend(); ++it)
        cout << *it << endl;
    }
  }
  return 0;
}
