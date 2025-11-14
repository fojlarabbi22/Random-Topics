#include<bits/stdc++.h>
using namespace std;
#define ll long long

int power(int x, ll n, int mod) { // O(log n) = 64
    int cur = x % mod; // x^(2^0)   
    int ans = 1 % mod;
    while(n > 0) {
        if(n & 1) {
            ans = 1LL * ans * cur % mod;
        }
        cur = 1LL * cur * cur % mod;
        n = n >> 1; // Another way of traversal 
    }
    return ans;
  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << power(1e8 + 9, 1e18, 1e9 + 7);
    return 0;
}
// 908727740
