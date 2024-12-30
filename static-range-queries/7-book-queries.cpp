// problem link: https://codeforces.com/problemset/problem/1066/C

#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
    int q, id, l = 0, r = 0, idx = 0;
    char c;
    unordered_map<int, int> m;
    scanf("%d", &q);
    while(q--){
        cin >> c >> id;
        if(c == 'L'){
            if(l == 0) r++;
            m[id] = l--;
        }
        else if(c == 'R'){
            if(r == 0) l--;
            m[id] = r++;
        }
        else if(c == '?') cout << min(m[id] - l, r - m[id]) -1 << endl;
    }
    return 0;
}
