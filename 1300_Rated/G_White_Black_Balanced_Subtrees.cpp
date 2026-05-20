#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

int dfs(int p, vector<vector<int>>& adj, string &s) {
    int sum = 0;
    for (int child : adj[p]) {
        sum += dfs(child, adj, s);
    }
    if (s[p-1] == 'W') sum += 1;
    else sum -= 1;
    if (sum == 0) cnt++;
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cnt = 0;

        int n;
        cin >> n;

        vector<vector<int>> adj(n+1);

        for (int i = 0; i < n-1; i++) {
            int p;
            cin >> p;
            adj[p].push_back(i+2);
        }

        string s;
        cin >> s;

        dfs(1, adj, s);

        cout << cnt << "\n";
    }

    return 0;
}