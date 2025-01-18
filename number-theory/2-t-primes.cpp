// problem link: https://codeforces.com/problemset/problem/230/B
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
typedef long long ll;

///* Find the divisors of a given number n. O(√n)*/
vector<int> findDevisors(int n) {
  vector<int> ret;
  int i = 1;
  for (; i * i < n; i++) {
    if (n % i == 0)
      ret.push_back(i), ret.push_back(n / i);
  }
  if (i * i == n)
    ret.push_back(i);
  return ret;
}

/* Check if the given number is prime. O(√n)*/
bool isPrime(int n) {
  if (n < 2)
    return false;
  for (int i = 2; i * i <= n; i += 1 + (i & 1))
    if (n % i == 0)
      return false;
  return true;
}

///* sieve algorithm: Find all of the prime numbers in a range. O(n*lg(lg(n)))
///*/
// #define N int(1e9)
// bool isPrime[N];
// void sieve(int n){
//   fill(isPrime, isPrime + N, 1);
//   isPrime[0] = isPrime[1] = 0;
//   for(int i = 2; i <= n; i+= 1 + (i&1)){
//     if(isPrime[i]){
//       for(int j = i * i; j <= n; j+=i)
//         isPrime[j] = 0;
//     }
//   }
// }

int main() {
  int n, cnt = 0;
  cin >> n;
  map<ll, int> m;
  vector<ll> vec(n);
  for (auto &x : vec)
    cin >> x;
  for (ll i = 1; i <= int(1e6); i++) {
    m[i * i] = i;
  }

  for (int i = 0; i < n; i++) {
    if (m.find(vec[i]) != m.end() && isPrime(m[vec[i]]))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
