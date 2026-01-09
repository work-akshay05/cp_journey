#include<bits/stdc++.h>
using namespace std;
int fn(vector<int>&nums,int n,int k){
    int miniopreq=INT_MAX;
    for(int i=0;i<n;i++){
        int div=(nums[i]+k-1)/k;
        miniopreq=min(miniopreq,(div*k)-nums[i]);
    }

    return miniopreq;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        int en=0;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]%2==0)en++;
        }
        if(k%2!=0){
            cout<<fn(nums,n,k)<<endl;
        }
        else {
            if(en>=2)cout<<0<<endl;
            else cout<<min(2-en,fn(nums,n,k))<<endl;
        }
        
    }
}