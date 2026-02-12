#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;

        vector<pair<long long,long long>>nums;
        for(int i=0;i<n;i++){
            long long x,y;
            cin>>x>>y;
            nums.push_back({x,y});
        }

        pair<long long,long long>curra=nums[a-1];
        pair<long long,long long>currb=nums[b-1];

        long long count=abs(curra.first-currb.first)+abs(curra.second-currb.second);

        vector<pair<long long ,long long>>temp(nums.begin(),nums.begin()+k);

        long long minia=LLONG_MAX;
        long long minib=LLONG_MAX;
        for(int i=0;i<k;i++){
            if(i!=a-1){
                minia=min(minia,1LL*(abs(temp[i].first-curra.first)+abs(temp[i].second-curra.second)));
            }
            if(i!=b-1){
                minib=min(minib,1LL*(abs(temp[i].first-currb.first)+abs(temp[i].second-currb.second)));
            }
        }


        if(k>=b && k>=a){cout<<0<<endl;}
        else if(k>=b && k<a)cout<<min(minia,count)<<endl;
        else if(k>=a && k<b)cout<<min(minib,count)<<endl;
        else if(k==0 || minia==minib==LLONG_MAX) cout<<count<<endl;
        else cout<<min(minia+minib,count)<<endl;

    }
}