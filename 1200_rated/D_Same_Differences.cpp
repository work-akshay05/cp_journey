#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        long long count=0;
        unordered_map<long long,int>mp;
        for(int i=n-1;i>=0;i--){
            long long diff=nums[i]-(i+1);
            if(mp.find(diff)!=mp.end())count+=mp[diff];

            mp[diff]++;
        }
        cout<<count<<endl;
    }
}