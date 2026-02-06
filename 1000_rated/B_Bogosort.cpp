#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&nums){
    int n=nums.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[nums[i]-i]++;
    }

    if(mp.size()==n)return true;
    return false;
}
vector<int>fn(vector<int>&nums){
    int n=nums.size();

    if(check(nums))return nums;
    sort(nums.begin(),nums.end());
    if(check(nums))return nums;

    bool ans=check(nums);
    while(!ans){
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(j-i+nums[i]==nums[j])swap(nums[i],nums[j]);
            }
        }
        ans=check(nums);
    }
    return nums;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        nums=fn(nums);
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        
    }
}