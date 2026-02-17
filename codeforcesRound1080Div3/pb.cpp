#include<bits/stdc++.h>
using namespace std;
int root(int x){
    while(x%2==0){
        x/=2;
    }
    return x;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        unordered_map<int,vector<int>>mp;
        bool check=true;
        for(int i=1;i<n;i++){
            int indi=root(i+1);
            int ele=root(nums[i]);
            // cout<<"INDI: "<<indi<<"Ele: "<<ele<<endl;
            if(indi==ele)mp[indi].push_back(ele);
            else check=false;
        }

        if(check)cout<<"YES"<<endl;
        else cout<<"No"<<endl;
    }
}