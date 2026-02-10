/*
    ok so Question to smjh geya, abhi kya ho raha hai Question mai ki jaise hume initial element pick krna hai and fir dekhna hai ki uss se jo chote elements hai unnka sum milake kya vo bade sum tak jaa raha hai but fir vo O(n^2) jayega jo ki hum chahte nhi hai hume to chahiye o(nlogn) 

    suppose agar humne jo initial score choose kra uss se chote yaa usske equal elements ka sum greater then aajaye usske next elements se vo vahi put kr do jo usske next elements ka ans hai

    and array ko piche se chalao 
    [20,5,1,4,2]
    {(20,0),{5,1},(1,2),(4,3),(2,4)}
    [1,2,4,5,20]
    [1,3,7,12,32]
    pres[i]>s[i+1]
    ans[mp[s[i]]]=ans[mp[s[i+1]]];


*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<pair<long long,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({a[i], i});
        }

        sort(v.begin(), v.end());

        vector<long long> pref(n);
        pref[0] = v[0].first;
        for (int i = 1; i < n; i++)
            pref[i] = pref[i-1] + v[i].first;

        vector<int> ans(n);

        ans[v[n-1].second] = n-1;

        int last = n-1;

        for (int i = n-2; i >= 0; i--) {
            if (pref[i] >= v[i+1].first)
                ans[v[i].second] = last;
            else {
                last = i;
                ans[v[i].second] = i;
            }
        }

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}

// 20,5,4,4,2
// 2,4,4,5,20
// [2,6,10,15,35]
// [4,3,3,3,0]