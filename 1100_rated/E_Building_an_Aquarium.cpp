#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        long long x;
        cin>>x;

        vector<long long>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];

        long long lo=LLONG_MAX;
        long long hi=LLONG_MIN;

        for(int i=0;i<n;i++){
            lo=min(lo,nums[i]);
        }

        hi=x+lo;
        long long maybe=-1;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            long long count=0;
            for(int i=0;i<n;i++){
                if(nums[i]<mid){
                    count+=mid-nums[i];
                }
            }
            if(count<=x){
                lo=mid+1;
                maybe=mid;
            }else{
                hi=mid-1;
            }
        }
        cout<<maybe<<endl;
    }
    
}