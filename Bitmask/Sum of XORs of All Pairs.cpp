// First think about binary array (just some 0s and 1s)
// then consider the binary array at each position (Bitwise pos) like a "Vertical Array"
// In this vertical array, all 0s and 1s are from diff diff elements of the Main array 
// (in this problem, they are from the XORs)

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<int> freq(31, 0); 
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= 30; j++) {
            if((a[i] >> j) & 1) freq[j]++;
        }

    }    
    int ans = 0;
    for(int j = 0; j <= 30; j++) {
        int contrib = 2 * (freq[j] * (n - freq[j]));
        ans += contrib * (1 << j);
    }
    cout << ans << '\n';

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
