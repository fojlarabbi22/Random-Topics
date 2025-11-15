// Say you are told to determine a^(b^c) [a raised to b raised to c]
// a, b, c all are large values 
// mod is Prime and doesn't divide a

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int power(int x, ll n, int mod) { // O(log n) = 64
    x = x % mod;   
    int ans = 1 % mod;
    while(n > 0) {
        if(n & 1) {
            ans = 1LL * ans * x % mod;
        }
        x = 1LL * x * x % mod;
        n = n >> 1;
    }
    return ans;
  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mod = 1e9 + 7;
    int a, b, c;
    cin >> a >> b >> c;
    int e = power(b, c , mod - 1);
    cout << power(a, e, mod);
    return 0;
}
// 3 4 5
// 763327764
