#include <bits/stdc++.h>
using namespace std;

long long MOD = 1e9+7;
long long inv6 = 166666668; 

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        n %= MOD;

        long long ans = n;
        ans = (ans * (n + 1)) % MOD;
        ans = (ans * (4*n % MOD - 1 + MOD)) % MOD;
        ans = (ans * inv6) % MOD;

        long long finalAns = (ans * 2022) % MOD;
        cout << finalAns << endl;
    }
}