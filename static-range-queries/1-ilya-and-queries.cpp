// problem link: https://codeforces.com/problemset/problem/313/B
#include <iostream>
#include <vector>
using namespace std;


int main(){
    string s;
    cin >> s;
    int sz = s.size();
    vector<int> pre(sz);

    for(int i = 0; i < sz-1; i++){
        pre[i] = (s[i] == s[i+1]);
        if(i) pre[i] += pre[i-1];
    }

    int m, l, r;
    scanf("%d", &m);
    while(m--){
        scanf("%d %d", &l, &r);
        l--, r--;
        if(l == 0) printf("%d\n", pre[r-1]);
        else printf("%d\n", pre[r-1] - pre[l-1]);
    }
    return 0;
}
