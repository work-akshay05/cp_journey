#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& nums) {
    // galti ye thi ki right most vaala hi hoga jo humne bnana hai 
    int n=nums.size();
    int rightMost=nums[n-1];
    int occ=1;
    int i=n-2;
    while(i>=0 && nums[i]==rightMost){
        occ++;
        i--;
    }    
    int count=0;
    for(int j=i;j>=0;j--){
        if(nums[j]==rightMost && j<n-occ)occ++;
        else if(nums[j]!=rightMost && j<n-occ){
            occ*=2;
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        cout<<solve(nums)<<endl;
    }
}