// problem link: https://codeforces.com/problemset/problem/961/B
#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, k;
  scanf("%d %d", &n, &k);
  vector<int> v(n);
  vector<int> t(n);
  for(auto &x : v) scanf("%d", &x);
  for(auto &x : t) scanf("%d", &x);
  vector<int> pre(n);
  for(int i = 0;i < n; i++){
    pre[i] = v[i];
    if(i) pre[i] += pre[i-1];
  }
  vector<int> pre1(n);
  for(int i = 0;i < n; i++){
    pre1[i] = v[i] * t[i];
    if(i) pre1[i] += pre1[i-1];
  }

  vector<int> d(n);
  for(int i = 0;i < n; i++) d[i] = pre[i] - pre1[i];

  int res = 0;
  for(int i = 0; i < n-k+1; i++){
    if(i==0) res = max(res, d[i+k-1]);
    res = max(res, d[i+k-1] - d[i-1]);
  }
  res += pre1[n-1];
  printf("%d\n", res);
}
