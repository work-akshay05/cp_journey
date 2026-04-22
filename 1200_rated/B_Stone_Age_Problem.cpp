#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;

    vector<long long>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    long long sum=accumulate(nums.begin(),nums.end(),0LL);
    
    unordered_map<int,long long>mp;
    bool check=false;
    long long last=0;
    for(int j=0;j<q;j++){
        int t;
        cin>>t;
        if(t==1){
            int i;
            long long x;
            cin>>i>>x;
            if(!check){
                sum=sum-nums[i-1]+x;
                nums[i-1]=x;
            }else{
                if(mp.find(i-1)!=mp.end()){
                    sum=sum-mp[i-1]+x;
                    mp[i-1]=x;
                }else{
                    mp[i-1]=x;
                    sum=sum-last+x;
                }
            }
        }
        else{
            check=true;
            mp.clear();
            long long x;
            cin>>x;
            last=x;
            sum=n*x;
        }
        cout<<sum<<endl;
    }
}