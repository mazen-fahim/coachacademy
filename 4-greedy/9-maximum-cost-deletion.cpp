// problem link: https://codeforces.com/problemset/problem/1550/B
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void fast_io(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int main(){
  fast_io;
  int t; cin >> t;
  while(t--){
    int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    size_t sz = s.size();

    int cnt = 1;
    for(int i = 1; i < sz; i++)
      if(s[i] != s[i-1]) cnt++;

    if(b >= 0)
      cout << n * (a+b) << endl;
    else
      cout<< n * a + (cnt/2+1) * b << endl;

  }
  return 0;
}
