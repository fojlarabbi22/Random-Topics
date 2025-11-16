#include<bits/stdc++.h>
using namespace std;
#define ll long long

// nCr using recurrence
// O(n^2) but effective when mod is not prime
const int N = 2005, m = 1e9;
int C[N][N];
void pre() {
    for(int n = 0; n < N; n++) {
        C[n][0] = 1;
    }
    for(int n = 1; n < N; n++) {
        for(int r = 1; r <= n; r++) {
            C[n][r] = (C[n - 1][r] + C[n - 1][r - 1]) % m;
        }
    }
    // r > n like C[0][1] will already 0 (all are 0s initially)
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pre();
    cout << C[4][2]; // 6
    return 0;
}
