#include<bits/stdc++.h>
using namespace std;
long long solve(long long x,
    int m,
    vector<pair<long long,long long>>&pairs){
        long long start=x;
        long long last=x;
        for(int i=0;i<m;i++){
            if((start>=pairs[i].first && start<=pairs[i].second)
            || (last>=pairs[i].first && last<=pairs[i].second) ){
                start=min(start,pairs[i].first);
                last=max(last,pairs[i].second);
            }
        }
        return last-start+1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n,x;
        int m;
        cin>>n>>x>>m;
        vector<pair<long long,long long>>pairs;
        for(int i=0;i<m;i++){
            long long a,b;
            cin>>a>>b;

            pairs.push_back({a,b});
        }

        long long ans=solve(x,m,pairs);
        cout<<ans<<endl;
    }

    return 0;
}