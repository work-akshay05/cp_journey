#include<bits/stdc++.h>
using namespace std;
// struct hash_pair
// {
//     size_t operator()(const pair<long long,long long>&p)const{
//         auto h1 = hash<long long>()(p.first);
//         auto h2 = hash<long long>()(p.second);
//         return h1 ^ (h2 << 1);  
//     }
// };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        long long x,y;
        cin>>n>>x>>y;
        
        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        long long count=0;
        map<pair<long long,long long>,int>mp;
        for(int i=n-1;i>=0;i--){
            long long remx=nums[i]%x;
            long long remy=nums[i]%y;

            if(remx==0){
                auto it=mp.find({0,remy});
                if(it!=mp.end())count+=it->second;
            }
            else{
                auto it=mp.find({x-remx,remy});
                if(it!=mp.end())count+=it->second;
            }
            mp[{remx,remy}]++;
        }

        cout<<count<<endl;
    }

    return 0;
}