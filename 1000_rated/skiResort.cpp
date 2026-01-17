#include<bits/stdc++.h>
using namespace std;
long long fn(vector<int>&nums,int n,int k,int q){
    long long sum=0;
    int tempn=0;
    for(int i=0;i<n;i++){
        if(nums[i]<=q)tempn++;
        else if(nums[i]>q){
            if(tempn>=k){
                sum+=1LL*(tempn-k+1)*(tempn-k+2)/2;
            }
            tempn=0;
        }
    }
    // if(tempn==k)sum+=1;
    if(tempn>=k){
        sum+=1LL*(tempn-k+1)*(tempn-k+2)/2;
    }

    return sum;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k,q;
        cin>>n>>k>>q;

        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        cout<<fn(nums,n,k,q)<<endl;
    }
}

// [4-2+1]*[4-2+2]/2=6
// [1,2,3,4]=(1,2),(2,3),(3,4),(1,2,3),(2,3,4),(1,2,3,4)