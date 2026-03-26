/*
    we should think about deriving the value of a by subtracting, koi specific nhi ban raha tha
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        long long k;
        cin>>n>>k;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        map<long long,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        bool check=false;
        for(int i=0;i<n;i++){
            long long x=nums[i]-k;
            if(x==nums[i]){
                if(mp[nums[i]]>=2){
                    check=true;
                    // cout<<nums[i]<<" "<<x<<endl;
                }
            }
            else{
                if(mp.find(x)!=mp.end()){
                    check=true;
                    // cout<<nums[i]<<" "<<x<<endl;
                }
            }
        }

        if(check)cout<<"YES\n";
        else cout<<"NO\n";

    }
}