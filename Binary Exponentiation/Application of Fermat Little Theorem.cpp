// Say you are told to determine a^(b^c) [a raised to b raised to c]
// a, b, c all are large values 
// And mod is Prime and doesn't divide a

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int binpow(ll a, ll n, int m) { // O(log n) = 64
    a = a % m;   
    ll res = 1 % m;
    while(n > 0) {
        if(n & 1) {
            res = res * a % m;
        }
        a = a * a % m;
        n >>= 1;
    }
    return res;
  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m = 1e9 + 7;
    int a, b, c;
    cin >> a >> b >> c;
    int e = binpow(b, c, m - 1);
    cout << binpow(a, e, m);
    return 0;
}
// 3 4 5
// 763327764
