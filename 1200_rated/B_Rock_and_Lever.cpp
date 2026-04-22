#include<bits/stdc++.h>
using namespace std;
int fn(long long x){
    int maxi=0;
    for(int i=0;i<32;i++){
        if((x&(1<<i))!=0)maxi=max(i+1,maxi);
    }
    return maxi;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        unordered_map<int,int>mp;
        long long count=0;
        for(int i=n-1;i>=0;i--){
            int hbit=fn(nums[i]);
            if(mp.find(hbit)!=mp.end()){
                count+=mp[hbit];
            }

            mp[hbit]++;
        }

        cout<<count<<endl;
    }

    return 0;
}