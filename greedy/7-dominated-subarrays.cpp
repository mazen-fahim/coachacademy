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
    int n; cin >> n;
    map<int, int> indx;
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      if(indx.find(x) != indx.end()){
        ans = min(ans, i - indx[x] + 1);
      }
      indx[x] = i;
    }
    if(ans != INT_MAX) cout << ans << endl;
    else cout << -1 << endl;
  }
  return 0;

}
