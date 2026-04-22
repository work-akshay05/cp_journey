#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;

        vector<long long>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<long long>k(q);
        for(int i=0;i<q;i++)cin>>k[i];

        vector<pair<long long,int>>nums;
        for(int i=0;i<q;i++){
            nums.push_back({k[i],i});
        }
        
        sort(nums.begin(),nums.end());
        
        vector<long long>ans(q);
        int j=0;
        long long sum=0;
        for(int i=0;i<q;i++){
            int curr=nums[i].first;
            int indi=nums[i].second;
            while(j<n && a[j]<=curr){
                sum+=a[j];
                j++;
            }
            ans[indi]=sum;
        }
        for(int i=0;i<q;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}