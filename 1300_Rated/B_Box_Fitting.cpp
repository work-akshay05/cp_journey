#include<bits/stdc++.h>
using namespace std;
bool ok(int rows,vector<int>&nums,int w){
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<rows;i++)pq.push(0);

    for(int i=0;i<nums.size();i++){
        int x=pq.top();
        pq.pop();
        pq.push(x+nums[i]);
    }

    int maxi=INT_MIN;
    while(!pq.empty()){
        maxi=max(maxi,pq.top());
        pq.pop();
    }

    if(maxi<=w)return true;
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        long long w;
        cin>>n>>w;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        sort(nums.begin(), nums.end(), greater<int>());
        int bottom=1;
        int top=n;
        int ans=n;
        while(bottom<=top){
            int mid=bottom+(top-bottom)/2;
            if(ok(mid,nums,w)){
                ans=mid;
                top=mid-1;
            }
            else {
                bottom=mid+1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}