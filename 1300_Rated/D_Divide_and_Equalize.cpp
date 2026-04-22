#include<bits/stdc++.h>
using namespace std;
const int maxi=1e6+1;
vector<int>spf(maxi);
unordered_map<int,int>mp;
void sieve(){
    for(int i=0;i<maxi;i++)spf[i]=i;

    for(int i=2;i*i<maxi;i++){
        if(spf[i]==i){
            for(int j=i*i;j<maxi;j+=i){
                if(spf[j]==j)spf[j]=i;
            }
        }
    }
}
void getprimefactor(int x){
    while(x!=1){
        mp[spf[x]]++;
        x/=spf[x];
    }
}
int main(){
    sieve();
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        mp.clear();
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        for(int i=0;i<n;i++){
            getprimefactor(nums[i]);
        }
        bool printed=false;
        for(auto it:mp){
            if((it.second)%n!=0){
                cout<<"NO"<<endl;
                printed=true;
                break;
            }
        }
        if(!printed)cout<<"YES"<<endl;
    }
}