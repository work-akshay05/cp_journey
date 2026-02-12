#include<bits/stdc++.h>
using namespace std;
vector<int>fn(int n){
    vector<int>ans;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i){
                ans.push_back(i);
            }
            else{
                ans.push_back(n/i);
                ans.push_back(i);
            }
        }
    }

    return ans;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        vector<int>div=fn(n);
        // for(int i=0;i<div.size();i++){
        //     cout<<div[i]<<" ";
        // }
        // cout<<endl;

        for(int i=1;i<n;i++){
            nums[i]=nums[i]+nums[i-1];
        }
        long long ans=0;
        // now nums is a prefix sum array
        for(int i=0;i<div.size();i++){
            int curr=div[i];
            // cout<<"curr: "<<curr<<endl;
            int j=curr;
            long long maxi=LLONG_MIN;
            long long mini=LLONG_MAX;
            long long prev=0;
            while(j<=n){
                // cout<<"j: "<<j<<endl;
                long long currSum=nums[j-1]-prev;
                // cout<<"currSum: "<<currSum<<endl;
                maxi=max(maxi,currSum);
                mini=min(mini,currSum);
                // cout<<"maxi: "<<maxi<<"mini: "<<mini<<endl;
                prev=nums[j-1];
                j+=curr;
                // cout<<"newj: "<<j<<endl;
            }
            ans=max(ans,maxi-mini);
            // cout<<"updated ans: "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}