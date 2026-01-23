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

        vector<pair<int,int>>temp;
        for(int i=0;i<n;i++){
            temp.push_back({nums[i],i});
        }

        sort(temp.begin(),temp.end());

        vector<int>ans(n);
        int curr=1;
        int t=1;
        long long sum=0;
        for(int i=n-1;i>=0;i--){
            int idx=temp[i].second;
            if(t==1){
                ans[idx]=curr;
                t++;
                sum+=(long long)temp[i].first*curr;
            }
            else if(t==2){
                ans[idx]=(-1*curr);
                t=1;
                sum+=(long long)temp[i].first*curr;
                curr++;
            }
            
        }

        cout<<2*sum<<endl;
        cout<<0<<" ";
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
}