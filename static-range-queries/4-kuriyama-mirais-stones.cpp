// problem link: https://codeforces.com/problemset/problem/433/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


typedef long long ll;
int main(){
    int n;
    scanf("%d", &n);
    vector<int> in(n);
    vector<ll> pre(n);
    vector<ll> pre1(n);
    for(auto &x : in) scanf("%d", &x);
    vector<int> in1(in);
    sort(in1.begin(), in1.end());

    for(int i = 0; i < n; i++){
        pre[i] = in[i];
        if(i) pre[i] += pre[i-1];
    }

    for(int i = 0; i < n; i++){
        pre1[i] = in1[i];
        if(i) pre1[i] += pre1[i-1];
    }

    int m, l, r, t;
    scanf("%d", &m);
    while(m--){
        scanf("%d %d %d", &t, &l, &r);
        l--, r--;
        if(t == 1){
            if(l == 0) printf("%lld", pre[r]);
            else printf("%lld", pre[r] - pre[l-1]);

        }
        else{
            if(l == 0) printf("%lld", pre1[r]);
            else printf("%lld", pre1[r] - pre1[l-1]);
        }
        printf("\n");
    }
    return 0;
}
