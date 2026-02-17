#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        if(mp.find(67)!=mp.end())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}