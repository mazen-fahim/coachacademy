// problem link: https://codeforces.com/problemset/problem/816/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 200002;

int a[N];
int main(){
    int n, k, q;
    scanf("%d %d %d", &n, &k, &q);
    int l, r;
    while(n--){
        scanf("%d %d", &l, &r);
        a[l]++;
        a[r+1]--;
    }
    vector<int> pre(N-1);
    for(int i = 0; i < N-1; i++){
        pre[i] = a[i];
        if(i) pre[i] += pre[i-1];
    }
    for(int i = 0; i < N-1; i++){
        pre[i] = pre[i] >= k;
        if(i) pre[i] += pre[i-1];
    }
    int a, b;
    while(q--){
        scanf("%d %d", &a, &b);
        printf("%d\n", pre[b] - pre[a-1]);
    }

    return 0;
}
