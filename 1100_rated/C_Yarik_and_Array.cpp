#include<bits/stdc++.h>
using namespace std;
int fn(vector<int>&nums){
    int n=nums.size();

    int currsum=nums[0];
    int maxsum=nums[0];

    for(int i=1;i<n;i++){
        if(((nums[i]^nums[i-1]) & 1)==0){
            currsum=nums[i];
        }
        else {
            currsum=max(nums[i],nums[i]+currsum);
        }
        maxsum=max(maxsum,currsum);
    }

    return maxsum;

}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        cout<<fn(nums)<<endl;
    }
}