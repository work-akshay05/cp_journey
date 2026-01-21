#include<bits/stdc++.h>
using namespace std;
int fn(vector<long long>&nums,int n,long long x){
    int ans=0;
    long long prevl=nums[0]-x;
    long long prevr=nums[0]+x;
    // cout<<prevl<<" "<<prevr<<endl;
    for(int i=1;i<n;i++){
        long long nextr=nums[i]+x;
        long long nextl=nums[i]-x;
        // cout<<"next vaale:"<<nextl<<" "<<nextr<<endl;
        long long l=max(prevl,nextl);
        long long r=min(prevr,nextr);
        if(l<=r){
            prevl=l;
            prevr=r;
        }
        if(l>r){
            ans++;
            // cout<<"ans:"<<ans<<endl;
            // cout<<"update krdia"<<endl;
            prevl=nextl;
            prevr=nextr;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x;
        cin>>n>>x;

        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        cout<<fn(nums,n,x)<<endl;
    }
}