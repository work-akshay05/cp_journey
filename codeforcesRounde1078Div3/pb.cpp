#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x,y;
        cin>>n>>x>>y;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=(nums[i]/x)*y;
        }

        long long ans=INT_MIN;
        for(int i=0;i<n;i++){
            ans=max(nums[i]+sum-(nums[i]/x)*y,ans);
        }

        cout<<ans<<endl;

    }
}