// problem link: https://codeforces.com/problemset/problem/1367/C

#include <iostream>
#include <vector>
#include <set>
#define FIO 
using namespace std;
typedef long long ll;


int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    int sz = s.size();
    for(int i = 0; i < sz; i++){
      if(s[i] == '1'){
        for(int j = 0; j < k; j++){
          if(i+j+1 < sz) s[i+j+1] = '1';
          if(i-j-1 >= 0) s[i-j-1] = '1';
        }
        i+=k;
      }
    }
    int cnt = 0;
    for(int i = 0; i < sz; i++){
      if(s[i] == '0'){
        cnt++;
        i+=k;
      }
    }
    cout << cnt << endl;

  }
  return 0;
}

