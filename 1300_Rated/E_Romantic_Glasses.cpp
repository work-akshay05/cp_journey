#include<bits/stdc++.h>
using namespace std;

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

        bool printed=false;
        map<long long,int>mp;
        long long lastsum=0;
        mp[lastsum]++;
        for(int i=0;i<n;i++){
            if(i%2==0)lastsum+=nums[i];
            if(i%2!=0)lastsum-=nums[i];

            if(mp.find(lastsum)!=mp.end()){
                cout<<"YES"<<endl;
                printed=true;
                break;
            }
            mp[lastsum]++;
        }

        if(!printed){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}