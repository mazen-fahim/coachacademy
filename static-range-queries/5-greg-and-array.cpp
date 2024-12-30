// problem link: https://codeforces.com/problemset/problem/296/C

#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef long long ll;
int main(){
    ll n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    vector<ll> in(n);
    for(auto &x : in) scanf("%lld", &x);

    ll l, r, d;
    vector<ll> arr(3);
    map<ll, vector<ll>> map;
    for(int i = 0;i < m; i++){
        scanf("%lld %lld %lld", &l, &r, &d);
        l--, r--;
        arr[0] = l;
        arr[1] = r;
        arr[2] = d;
        map[i] = arr;
    }

    int x, y;
    vector<ll>ps1(m+1);
    for(int i = 0; i < k; i++){
        scanf("%d %d", &x, &y);
        x--, y--;
        ps1[x]++;
        ps1[y+1]--;
    }

    vector<ll>pre1(m);
    for(int i= 0; i < m; i++){
        pre1[i] = ps1[i];
        if(i) pre1[i] += pre1[i-1];
    }

    for(int i = 0; i < m; i++){
        map[i][2] *= pre1[i];
    }

    vector<ll>ps2(n+1);
    for(int i = 0; i < m; i++){
        ps2[map[i][0]] += map[i][2];
        ps2[map[i][1]+1] -= map[i][2];
    }

    vector<ll>pre2(n);
    for(int i= 0; i < n; i++){
        pre2[i] = ps2[i];
        if(i) pre2[i] += pre2[i-1];
    }


    for(int i = 0; i < n; i++){
        in[i] = in[i] + pre2[i];
        printf("%lld ", in[i]);
    }
    printf("\n");

    return 0;
}
