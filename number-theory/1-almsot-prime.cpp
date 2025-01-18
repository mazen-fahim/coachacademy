// problem link: https://codeforces.com/problemset/problem/26/A
#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
const int N = 1e5 + 1;
const int OO = 1e9;
using namespace std;

vector<pair<int, int>> prime_fact(int x) {
  vector<pair<int, int>> ans;

  for (int i = 2; i * i <= x; i++) {
    int cnt = 0;
    while (x % i == 0) {
      cnt++;
      x /= i;
    }
    if (cnt)
      ans.push_back({i, cnt});
  }
  if (x != 1)
    ans.push_back({x, 1});

  return ans;
}

void solve() {
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    cnt += (prime_fact(i).size() == 2);
  }
  cout << cnt << endl;
}

int main() {
  int t;
  t = 1;
  // cin >> t;
  for (int i = 0; i < t; i++) {
    solve();
  }
  return 0;
}
