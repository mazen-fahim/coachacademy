// problem link: https://www.spoj.com/problems/CSUMQ/en/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, q, l, r;
    scanf("%d", &n);
    vector<int> v(n);
    vector<int> pre(n);
    for(auto &x: v) scanf("%d", &x);

    for(int i = 0; i < n; i++){
        pre[i] = v[i];
        if(i) pre[i] += pre[i-1];
    }

    scanf("%d", &q);
    while(q--){
        scanf("%d %d", &l, &r);
        if(l == 0) printf("%d\n", pre[r]);
        else printf("%d\n", pre[r] - pre[l-1]);
    }
    return 0;
}
