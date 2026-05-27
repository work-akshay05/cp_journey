#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    long long sum=accumulate(nums.begin(),nums.end(),0LL);
    unordered_map<long long,int>mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }

    vector<int>ans;
    for(int i=0;i<n;i++){
        long long currSum=sum-nums[i];
        if(currSum%2==0){
            auto it=mp.find(currSum/2);
            if(nums[i]==(currSum/2)){
                if(it!=mp.end() && it->second>=2){
                    ans.push_back(i+1);
                }
            }
            else {
                if(it!=mp.end()){
                    ans.push_back(i+1);
                }
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    
}