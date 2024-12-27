// problem link: https://codeforces.com/problemset/problem/1550/B
#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;

int main(){
  int t;
  cin >> t;
  while(t--){
    int c1, c2, c3;
    int a1, a2, a3, a4, a5;
    cin >> c1 >> c2 >> c3;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    c1 -= a1;
    c2 -= a2;
    c3 -= a3;
    if(c1 < 0 || c2 < 0 || c3 < 0){
      cout << "NO" << '\n';
    }
    else{
      c1 -= a4;
      c2 -= a5;
      if(c1 < 0) c3 -= c1*-1;
      if(c2 < 0) c3 -= c2*-1;
      if(c3 < 0) cout << "NO" << '\n';
      else cout << "YES" << '\n';
    }
  }
  return 0;
}

