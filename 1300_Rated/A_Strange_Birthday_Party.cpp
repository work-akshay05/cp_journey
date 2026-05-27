#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int>k(n);
        for(int i=0;i<n;i++)cin>>k[i];

        vector<long long>c(m);
        for(int i=0;i<m;i++)cin>>c[i];

        vector<pair<long long,int>>temp;
        for(int i=0;i<n;i++){
            temp.push_back({c[k[i]-1],k[i]});
        }

        long long ans=0;
        sort(temp.begin(),temp.end());
        int j=1;
        for(int i=n-1;i>=0;i--){
            int curr=temp[i].first;
            int indi=temp[i].second;
            if(j>=indi){
                ans+=curr;
                j++;
            }
            else if(c[j-1]<=curr){
                ans+=c[j-1];
                j++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}