/* 
tried, but not able to find the solution
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n), b;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        b = a;
        sort(b.begin(), b.end());

        long long ans = LLONG_MAX;
        bool needSwap = false;

        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                needSwap = true;
                ans = min(ans, abs(a[i] - b[i]));
            }
        }

        if(!needSwap) cout << -1 << "\n";
        else cout << ans << "\n";
    }
}
