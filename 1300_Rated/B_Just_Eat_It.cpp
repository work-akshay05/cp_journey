#include<bits/stdc++.h>
using namespace std;
bool solve(int n,vector<long long>&nums){
    long long sum=accumulate(nums.begin(),nums.end(),0LL);
    long long res=nums[0];
    long long runningSum=nums[0];
    int count=1;
    for(int i=1;i<n-1;i++){

        runningSum=max(nums[i],nums[i]+runningSum);
        if(runningSum<=0)return false;

        res=max(res,runningSum);

        if(res>=sum)return false;
    }
    runningSum=max(nums[n-1],nums[n-1]+runningSum);
    if(runningSum<=0)return false;

    res=max(res,runningSum);

    if(res>sum)return false;
    
    return true;
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

        if(solve(n,nums))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}