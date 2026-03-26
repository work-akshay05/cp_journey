#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(long long i=0;i<n;i++)cin>>nums[i];

        vector<long long>sufsum=nums;
        for(long long i=1;i<n;i++){
            sufsum[n-1-i]+=sufsum[n-i];
            nums[i]+=nums[i-1];
        }

        map<long long,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        int maybe=0;
        for(int i=n-1;i>=0;i--){
            if(mp.find(sufsum[i])!=mp.end()){
                if(mp[sufsum[i]]<i){
                    maybe=max(maybe,mp[sufsum[i]]+1+(n-i));
                }
            }
        }

        cout<<maybe<<endl;
    }
}