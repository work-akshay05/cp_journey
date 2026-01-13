#include<bits/stdc++.h>
using namespace std;
struct compare{
    bool operator()(pair<int,int>p1,pair<int,int>p2){
        if(p1.first!=p2.first){
            return p1.first<p2.first; 
        }
        
        return p1.second>p2.second;
    }
};
vector<int>fn(vector<int>&nums,int n,int k){

    for(int i=0;i<n;i++){
        nums[i]=nums[i]%k;
    }
    vector<int>ans;
    priority_queue<pair<int,int>,vector<pair<int,int>>,compare>pq;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            ans.push_back(i+1);
        }
        else {
            pq.push({nums[i],i});
        }
    }

    while(!pq.empty()){
        pair<int,int>curr=pq.top();
        pq.pop();
        ans.push_back(curr.second+1);
    }

    return ans;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        vector<int>ans=fn(nums,n,k);
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
}